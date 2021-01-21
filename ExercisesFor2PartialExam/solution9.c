#include<stdio.h>
#include<stdlib.h>
int Odd (int a [], int n)
{
    if(!n)
      return 0;
    return abs(a[n-1]) % 2 + Odd(a, n-1);
}

int main()
{
    int n;
     scanf("%d", &n);
    int niza[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &niza[i]);
    }

    printf("%d", Odd(niza, n));
}
