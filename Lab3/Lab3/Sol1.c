
#include<stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int niza[n];
    int numbers = 0;
    int tempIn;
    for(int i = 0; i<n; i++)
    {

        scanf("%d", &tempIn);
        if(tempIn > 9 && tempIn < 100 && tempIn%2 == 0)
            niza[numbers++] = tempIn;

    }

    for(int i = 0; i<numbers; i++)
    {
        printf("%d\n", niza[i]);

    }
}
