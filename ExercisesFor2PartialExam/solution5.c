
#include <stdio.h>
#include <string.h>
#define MAX 100



int significant_digit(long int n)
{
    while(n>=10)
         n/=10;
    return n;
}

//ne menuvaj!
void wtf() {
    FILE *f = fopen("numbers.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main()
{
    wtf();

    FILE * ptr = fopen("numbers.txt", "r");
    int n;
    long int current_number;
    long int save_number_print;
    int save_significant_digit;

    //char temp;
    //fscanf(ptr, "%c", &temp);
  // printf("%c", temp);
  //rewind(ptr);
     fscanf(ptr, "%d", &n);
     //printf("%d", n);
    while(n!=0)
    {
     //   printf("n is %d\n", n);
        save_significant_digit = -1;
    for(int i = 0; i<n; i++)
    {
         fscanf(ptr, "%ld", &current_number);
        // printf("current number = %ld", current_number);
         int temp_digit = significant_digit(current_number);
       //  printf("significant_digit = %d and temp_digit = %d", save_significant_digit, temp_digit);
         if(temp_digit > save_significant_digit)
         {
             save_significant_digit = temp_digit;
             save_number_print = current_number;
         }

    }
    printf("%ld\n", save_number_print);
    fscanf(ptr, "%d", &n);
    }
    return 0;
}


