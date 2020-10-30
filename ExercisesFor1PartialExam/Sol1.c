
#include<stdio.h>

int chToInt(char s[2])
{
    //check if the second element is a letter
    if(s[1]<'0' || s[1] > '9')
        return s[0]-'0';
    return (s[0] - '0')*10 + (s[1] - '0');

}

int main()
{
    int sum = 0;
    char s[1000];
    char temp;
    scanf("%1000[^\n]s", s);
    char tempNumb[2];

    //printf("%s\n", s);

    int i = 0;
    while(s[i] != '!')
    {
        //printf("%c\n", s[i]);
        if(s[i]>='0' && s[i]<='9')
        {
          //  printf("we are in with %c\n", s[i]);
            tempNumb[0] = s[i];
            tempNumb[1] = s[i+1];
            //printf("we got number: %d\n", chToInt(tempNumb));
            sum+=chToInt(tempNumb);

            i++;
        }
        if(s[i++] == '!')
            break;

    }
    printf("%d", sum);
}
