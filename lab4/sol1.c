#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    int k;
    scanf("%d", &k);

    int newA[n];
    int element = 0;
    //less than k
    for(int i = 0; i<n; i++)
    {
        if(a[i] < k)
            newA[element++] = a[i];

    }
    //greater or equal to k
    for(int i = 0; i<n; i++)
    {
        if(a[i] >= k)
            newA[element++] =a[i];

    }

    for(int i = 0; i<n; i++)
    {
        printf("%d ", newA[i]);

    }
}
