
#include<stdio.h>

int operatortel(char s[12])
{
    if(s[2] == '0' || s[2] == '1' || s[2] == '2')
    return 1;
    else if(s[2] == '5' || s[2] =='6' || s[2] == '7' || s[2] == '8')
    return 2;
    else if(s[2] == '9')
    return 3;
}

int main()
{
    char s[12];
    for(int i = 0; i<11; i++)
    {
        if(i==3)
            s[i++] = '/';
        else if(i==7)
        s[i++] = '-';

        scanf("%c", &s[i]);
    }
    s[11] = '\0';
    char operator1[] = " T-mobile";
    char operator2[] = " A1";
    char operator3[] = " LycaMobile";

    if(operatortel(s) == 1)
    printf("%s%s", s, operator1);
    else if(operatortel(s) == 2)
    printf("%s%s", s, operator2);
    else
    printf("%s%s", s, operator3);
}
