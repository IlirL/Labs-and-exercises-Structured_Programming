#include<stdio.h>

int main()
{
    int d;
    scanf("%d", &d);
    if(d>=100 && d<=999)
    {
        if(d%10 == d/100)
        printf("Palindrome\n");
        else
        printf("Not palindrome");
    }
    else
    {
        printf("Wrong input\n");
    }
}
