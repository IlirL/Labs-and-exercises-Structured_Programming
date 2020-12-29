#include<stdio.h>
#include<string.h>

void leterFrequency (char * text, char letter)
{
    char lower_case;
    char upper_case;
    int lower_case_int =0;
    int upper_case_int = 0;
    int total_chars = 0;
    if(letter <= 122 && letter >= 97)
    {
        lower_case = letter;
        upper_case = (char)(letter - 32);
    }
    else
    {
        upper_case = letter;
        lower_case = (char)(letter+32);
    }
    //printf("upper = %c /n lower = %c", upper_case, lower_case);
    while(*text != '\0')
    {
        if(*text == upper_case)
            upper_case_int++;
        else if(*text == lower_case)
            lower_case_int++;
        if((*text <= 122 && *text>= 97) || (*text<= 90 && *text>=65))
        total_chars++;
        text++;
    }
    //printf("upper = %d lower = %d all = %d", upper_case_int, lower_case_int, total_chars);
    float lower_case_percent = (float)lower_case_int * 100 / total_chars;
    float upper_case_percent = (float)upper_case_int * 100 / total_chars;
    printf("%c -> %.3f%%\n", lower_case, lower_case_percent);
    printf("%c -> %.3f%%", upper_case, upper_case_percent);
}

int main()
{

    char text[1001];
   // text = (char *) malloc(1001);
    //i can also do char text[1001]
    //scanf("%1001s%[^\n]%*c", text);
   // gets(text);

    //fgets(text, 1000, stdin);
    scanf("%[^\n]%*c", text);
    //printf("I entered: %s\n", text);


    char letter;
    scanf("%c", &letter);
    //printf("%c", letter);

  leterFrequency(text, letter);
    //float percentage;
    //percentage = main_ocurrence * 100 / strlen(text);
    //printf("%.3f%%", percentage);
   // printf("\n ocurrence = %d", main_ocurrence);

}
