#include<stdio.h>

int f(int n)
{
    if(n<10)
        return 0;
    int evenPositionDigit = n/10 % 10;
    return evenPositionDigit + f(n/100);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", f(n));
}
