#include<stdio.h>

int check(int a)
{
    while(!((a%10)%2) && a)
    {
        a/=10;
    }
    return a;
    //if a == 0 then all digits are even
    //if a == number > 0 one digit at least is odd
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    for(; a<=b; a++)
    {
        if(!check(a))
        {
            printf("%d", a);
            return 0;
        }
    }
    printf("NSN");
}
