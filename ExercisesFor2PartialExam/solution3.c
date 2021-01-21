
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>


int count_digit(int n, int digit)
{
    if(n==0)
        return 0;
    return ((n%10 == digit) ? 1 : 0) + count_digit(n/10, digit);
}

int main()
{
    int size;
    scanf("%d", &size);
    int niza[size];

    for(int i = 0; i<size; i++)
        {
            scanf("%d", &niza[i]);
            niza[i] = count_digit(niza[i], niza[i] %10);

        }

        for(int i = 0; i<size; i++)
        {
            printf("%d ", niza[i]);

        }



}
