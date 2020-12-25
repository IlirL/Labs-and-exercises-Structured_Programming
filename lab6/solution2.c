
#include<stdio.h>

int countOfEvenDigits(int n)
{
    if(!n)
        return 0;
    //return n%10%2 ? 0 : 1 + countOfEvenDigits(n/10);
    if(n%10 % 2 == 0)
        return 1 + countOfEvenDigits(n/10);
    else
        return countOfEvenDigits(n/10);

}

void readNumbers(int n)
{
    if(!n)
        return;
    int nextNumber;
    scanf("%d", &nextNumber);
    printf("%d\n", countOfEvenDigits(nextNumber));
    readNumbers(n-1);
}

int main()
{
    int n;
    scanf("%d", &n);
    readNumbers(n);
}
