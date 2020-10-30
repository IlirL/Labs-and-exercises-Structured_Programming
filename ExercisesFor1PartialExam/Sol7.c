#include<stdio.h>
#include<stdlib.h>

long int mysqrt(int x)
{
    int i = 1;
    for(i = 1; i<=x/2; i++)
    {
        if(i*i > x)
            return i-1;
    }
    return i;

}

long int sumDiv(int x)
{
    long int root = mysqrt(x);
    long int sumOfDiv = 1;
    for(int i = 2; i<=root; i++)
    {
        if(x%i == 0)
        {
            sumOfDiv+=i + x/i;
        }
    }

    if(root *root == x)
        sumOfDiv-=root;

    return sumOfDiv;

}

long int mymax(long int a, long int b)
{
    if(a>b)
        return a;
    return b;
}

int main()
{
    int n;
    scanf("%d", &n);

    long int saveMax =  -1;
    long int saveSum = -1;
    n--;
     for(; n>0; n--)
    {
        if(saveSum < sumDiv(n))
        {
           // printf("We are in with n = %d\n", n);
            saveSum = sumDiv(n);
            saveMax = n;
            //printf("sumofdiv = %ld\n", saveSum);
        }
    }
    printf("%ld", saveMax);
}
