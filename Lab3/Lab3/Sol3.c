#include<stdio.h>


int digitXinNumberN(int digit, int number)
{
    int numberToReturn = 0;
    while(number)
    {
        if(number%10 == digit)
            numberToReturn++;
        number/=10;
    }
    return numberToReturn;
}

int main()
{

    int m,n,k;
    scanf("%d %d %d", &n, &m, &k);
    int numbersToPrint = 0;
    for(int i = n; i>0; i--)
    {
        if(numbersToPrint==10)
            break;
        if(digitXinNumberN(m, i) == k)
           {
                printf("%d\n", i);
                numbersToPrint++;
           }
    }
    if(!numbersToPrint)
        printf("WRONG PARAMETERS");
}
