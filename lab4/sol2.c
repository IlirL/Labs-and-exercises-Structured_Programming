#include<stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int niza[n];
    for(int i  = 0; i<n; i++)
        {
            scanf("%d", &niza[i]);
            if(niza[i]%2)
                niza[i]+=-1;
            else
                niza[i]+=1;
        }

         for(int i  = 0; i<n; i++)
        {
            printf("%d ", niza[i]);
        }

}
