#include<stdio.h>

int nDigits(int n)
{
    int res = 0;
    while(n>0)
    {
        res++;
        n/=10;
    }

    return res;
}


long int powTen(int x)
{
    long int res = 1;
    while(x)
    {
        x--;
        res*=10;
    }
    return res;
}
long int formN(long int n)
{
    int dig = nDigits(n);
    int lastDigit = n%10;
    n/=10;
    n+=lastDigit * powTen(dig-1);
    return n;
}

int solve(long int a,long int b)
{
    if(a>b)
        return 1;
    return 0;
}

int main()
{

     int n;
    scanf("%d", &n);
    long int niza[n][2];
    for(int i = 0; i<n; i++)
        scanf("%ld %ld", &niza[i][0], &niza[i][1]);
    for(int i  =0; i<n; i++)
    {
        if(solve(formN(niza[i][0]), niza[i][1]))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
