#include<stdio.h>

int function(int k, int number)
{
    if(!number)
        return 0;
    int currentDigit = number%10;
    if(currentDigit > k)
        return 10*function(k, number/10) + currentDigit;
    else
    return function(k, number/10);
}

int sumDigits(int n)
{
    if(!n)
    return 0;
    return n%10 + sumDigits(n/10);

}

int main()
{
    int k, n;
    scanf("%d%d", &k, &n);
    for(int i = 0; i<n; i++)
    {
        int currentNumber;
        scanf("%d", &currentNumber);
        int neededNumber = function(k, currentNumber);
        printf("%d : %d\n", neededNumber, sumDigits(neededNumber));
    }
}
