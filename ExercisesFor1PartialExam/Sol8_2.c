#include<stdio.h>


int middleN(int n)
{
    n/=10;
    int saveMiddle = 0;
    while(n>=10)
    {
        saveMiddle = saveMiddle*10 + n%10;
        n/=10;
    }
    return saveMiddle;
}

int sum(int n)
{
    int lastDigit = n%10;
    while(n>=10)
    n/=10;

    return lastDigit+n;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int tempMiddle;
    int tempSum;
    int count = 0;
    if(b<100)
        {printf("0\n"); return 0;}
    if(a<100)
    a = 100;
    for(;a<=b;a++)
    {
        tempMiddle = middleN(a);
        tempSum = sum(a);

        if(tempMiddle % tempSum == 0 && tempMiddle)
        {
            printf("%d -> (%d == (%d + %d) * %d)\n",a, tempMiddle, a%10, tempSum - a%10, tempMiddle / tempSum);
            count++;
        }


    }
    printf("%d", count);
}
