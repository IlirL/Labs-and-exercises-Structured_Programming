
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))

int parcom(int a){
    if(!a)
        return 0;
    return ((a%10 % 2 == 1) ? (a%10 - 1) : (a%10 + 1) ) + 10*parcom(a/10);
}

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main()
{
    int currentN;
    int niza[100];
    int niza_size = 0;

    while(scanf("%d", &currentN))
    {
        niza[niza_size++] = parcom(currentN);
    }

    qsort(niza, niza_size, sizeof(int), cmpfunc);

    for(int i = 0; i<MIN(5, niza_size); i++)
    {
        printf("%d ", niza[i]);
    }
}
