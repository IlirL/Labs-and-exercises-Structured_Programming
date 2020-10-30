#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if(a+b+c == 180)
    {
        printf("YES\n");
        if(a>90 || b>90 || c>90)
            printf("OBTUSE\n");
        else if(a==90 || b==90 || c==90)
            printf("RIGHT\n");
        else
            printf("ACUTE\n");
        }
    else
        printf("NO\n");
}
