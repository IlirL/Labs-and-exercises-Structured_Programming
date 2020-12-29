#include <stdio.h>

void writeToFile() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

void printFile() {

    FILE *f=fopen("output.txt","r");
    char line[100];
    while(!feof(f)){
        fgets(line,100,f);
        if (feof(f))
            break;
        printf("%s",line);
    }
    fclose(f);
}

int main() {
    int n;
    scanf("%d", &n);
    writeToFile();
    //Vasiot kod tuka
    int counter_diagonal_sum = 0;
    int niza[n][n];
    FILE *f0 = fopen("input.txt", "r");
    int row = 0, column = 0;
    char iterator = fgetc(f0);
    iterator = fgetc(f0);
    while(!feof(f0))
    {
        int element = 0;
        if(iterator == '\n')
        {
          // printf("we are in if \n");
            row++;
            column = 0;
        }
        else if(iterator>=48 && iterator <=57) // this has to mean that we got the first digit
        {
            //printf("We are in else if \n");
            element = 10*element + (int)(iterator - 48);
            iterator = fgetc(f0);
            while(!feof(f0) && iterator >= 48 && iterator<=57)
            {
                element = 10*element + (int)(iterator - 48);
                iterator = fgetc(f0);
            }
            niza[row][column++] = element;

            //printf("element = %d\n", element);
        }
        iterator = fgetc(f0);
    }
    fclose(f0);
    // //lets see if we got our niza right
    // for(int i = 0; i<n; i++){

    // for(int j = 0; j<n; j++)
    // printf("%d ", niza[i][j]);

    //     printf("\n");
    // }
    //All is well till now

    //calculate the counter_diagonal_sum;

    for(int i = 0; i<n; i++)
    {
        counter_diagonal_sum+=niza[i][n - i - 1];
    }

    //check counter_diagonal_sum
   // printf("%d", counter_diagonal_sum);
    //nice

    //The element to be printed is
    char printed_element[4];
     printed_element[2] = (char)(counter_diagonal_sum%10 + 48);
     counter_diagonal_sum/=10;
    printed_element[1] = (char)(counter_diagonal_sum%10 + 48);
      counter_diagonal_sum/=10;
    printed_element[0] = (char)(counter_diagonal_sum%10 + 48);
    printed_element[3] = '\0';


    //create the output.txt
    FILE *f1 = fopen("output.txt", "w");
    fputc('\n', f1);
    for(int row = 0; row<n-1; row++)
    {
        for(column = 0; column<=row; column++)
        {
            fputc(printed_element[0], f1);
             fputc(printed_element[1], f1);
              fputc(printed_element[2], f1);
              fputc(' ', f1);
        }
        fputc('\n', f1);
    }

    fclose(f1);

    printFile();
    return 0;
}
