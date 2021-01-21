
#include<stdio.h>


int abreviate(int n, int k)
{
    if(n==0)
        return 0;
    int current_digit = n%10;
    return (current_digit > k) ? (current_digit + 10*abreviate(n/10, k)) : (abreviate(n/10, k));
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
    int k;
    scanf("%d", &k);

    int maximum = -10000;
    for(int i = 0; i<n; i++)
    {
        niza[i] = abreviate(niza[i], k);
        if(niza[i] > maximum)
            maximum = niza[i];
    }
    printf("%d", maximum);
}
