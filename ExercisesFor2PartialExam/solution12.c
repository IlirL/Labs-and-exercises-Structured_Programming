#include<stdio.h>
#include<stdbool.h>
#include<string.h>
bool is_digit(char s)
{
    if(s>='0' && s<='9')
        return 1;

    return 0;
}

int main()
{
    char s[100];

    fgets(s, 100, stdin);
    bool found_digit = 0;
    for(int i = 0; i<strlen(s); i++)
    {
        if(found_digit)
        break;
        if(is_digit(s[i]))
        {
            printf("%c", s[i++]);
            while(!is_digit(s[i]) && i < strlen(s))
                printf("%c", s[i++]);

            if(i < strlen(s) -1 )
                printf("%c", s[i]);
            found_digit = 1;
        }
    }
    if(!found_digit)
    printf("No digits");
}
