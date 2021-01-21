#include <stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 80

void wtf() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int uppercase(char current_row[])
{
    int uppercase_number = 0;
    for(int i = 0; i<strlen(current_row); i++)
    {
        if(isalpha(current_row[i]) && current_row[i] == toupper(current_row[i]))
          uppercase_number++;
    }
    return uppercase_number;
}

int lowercase(char current_row[])
{
    int lowercase_number = 0;
    for(int i = 0; i<strlen(current_row); i++)
    {
        if(isalpha(current_row[i]) && current_row[i] == tolower(current_row[i]))
         lowercase_number++;
    }
    return lowercase_number;
}

int main() {
    wtf();

    char current_row[80];
    char save_max_row[80];
    FILE *f = fopen("text.txt", "r");
    float max_ratio = -1;
    int row = -1, save_row;
    while(fgets(current_row, 80, f) != NULL)
    {
        row++;
        float current_ratio;
      //  printf("uppercase = %d, lowercase = %d\n", uppercase(current_row), lowercase(current_row));
        current_ratio = uppercase(current_row) * 1.0 / lowercase(current_row);
        if(current_ratio > max_ratio)
        {
            max_ratio = current_ratio;
            save_row = row;
            //strcpy(save_max_row, current_row);
        }
        printf("%.2f %s", current_ratio, current_row);
    }
    printf("%d", save_row);
    fclose(f);
    return 0;
}
