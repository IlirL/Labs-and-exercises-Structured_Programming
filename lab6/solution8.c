
#include<stdio.h>

int ascendingDigits(int n)
{
    if(n<10)
        return 1;
    int currentDigit = n%10;
    int nextDigit = n/10 % 10;
    if(currentDigit > nextDigit)
        return ascendingDigits(n/10);
    else
        return 0;

}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i  = 0; i<n; i++)
    {
        int currentNumber;
        scanf("%d", &currentNumber);
        //printf("%d\n", ascendingDigits(currentNumber));
        if(ascendingDigits(currentNumber))
            printf("DA\n");
        else
            printf("NE\n");
    }
}
