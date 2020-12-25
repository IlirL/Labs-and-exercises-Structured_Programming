#include<stdio.h>

int ascending(int niza[], int sizeN)
{
    //compare two numbers, number sizeNth and sizenth-1
    if(sizeN<2)
        return 1;
    return niza[sizeN-1] > niza[sizeN-2] ? ascending(niza, sizeN-1) : 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    int niza[n];
    for(int i = 0; i<n; i++)
        scanf("%d", &niza[i]);

        int isAscending = ascending(niza, n);

        if(isAscending)
            printf("YES");
        else
            printf("NO");
}
