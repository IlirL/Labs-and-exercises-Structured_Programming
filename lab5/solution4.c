#include<stdio.h>

void printTriangle (int n)
{

    for(int i = 1; i<=n-1; i++)
    {
       // printf("i = %d", i);
        printf("*");
        for(int j = 1; j<=i-2; j++)
            {
                //printf("j = %d", j);
                printf("-");
            }
        if(i!=1)
        printf("*");
        printf("\n");


    }
    for(int j = 0; j<n; j++)
        printf("*");

}

int main()
{

    int n;
    scanf("%d", &n);
    printTriangle(n);
}
