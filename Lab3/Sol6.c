#include<stdio.h>



void parity(int x, int *even, int *odd)
{
    //printf("x = %d", x);
    while(x)
    {
        if((x%10)%2)
            *odd = *odd + 1;
        else
            *even = *even+1;
        x/=10;
    }
}
int main()
{

     int n;
    scanf("%d", &n);
    int even = 0, odd = 0;
    parity(++n, &even, &odd);
    while(even!=odd)
    {
        even = 0, odd = 0;
        parity(++n, &even, &odd);

    }
        printf("%d", n);
}
