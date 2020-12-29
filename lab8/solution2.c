//read from a file

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);

    f = fopen("text.txt", "r");
    int upper[100];
    int upper_size = 0;
    int temp_upper = 0;
    // int save_max_upper = -1;
    // char *save_string;
    // int string_size = 0;

    // int temp_size = 0;
    // char *temp_string;

    while(1)
    {
        c = fgetc(f);
        if(feof(f) || c == '#')
            break;
        if(c<=90 && c>=65)
        {
            temp_upper++;
        }

        if(c== '\n')
        {
            upper[upper_size++] = temp_upper;
            temp_upper = 0;

          //  printf("We are in");
        }

        // if(c == '\n')
        // {
        //     *temp_string = '\0';
        //     temp_string-=temp_size;
        //     if(save_max_upper < upper)
        //     {
        //         save_max_upper = uper;
        //         uper = 0;
        //         strcpy(save_string, temp_string);
        //     }
        // }
        // *temp_string = c;
        // temp_string++;
        // temp_size++;

       // printf("c = %c\n", c);
    }

    fclose(f);
    //time to print them and find the average, save the max upper
    int save_index_max;
    int save_upper_max = -1;
    float sum = 0;
    for(int i = 0; i<upper_size; i++)
        {
            printf("%d\n", upper[i]);
            sum+=upper[i];
            if(save_upper_max < upper[i])
            {
                save_upper_max = upper[i];
                save_index_max = i;
            }
        }
        sum /= upper_size;
    //time to print the average
    printf("%.2f\n", sum);

    //time to print the fucking sentence
    //now we know that our sentence is the save_index_max'th sentence
    int sentence = 0;
    f = fopen("text.txt", "r");
    while(sentence<save_index_max)
    {
        c = fgetc(f);
       // printf("%c", c);
        if(c=='\n')
            {
                sentence++;
                // printf("We are in\n");
                // printf("sentence = %d, save_index_max = %d", sentence, save_index_max);
            }

    }

    c=fgetc(f);
    while(c!='\n' || feof(f))
    {
        if(c<=90 && c>=65)
        {
            //do nothing if c is upper case letter
        }

        else
        {
            printf("%c", c);
        }
        c = fgetc(f);
    }
    fclose(f);
 }



int main() {
    writeToFile();


}
