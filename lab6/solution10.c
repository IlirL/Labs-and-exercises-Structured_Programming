
#include<stdio.h>

void triangle(int n)
{
    if(n)
    {
    triangle(n-1);
    }
    if(n)
    {
            for(int i = 1; i<=n; i++)
        printf("%d", i);
    printf("\n");
    }

}

int main()
{
    int n;
    scanf("%d", &n);
    triangle(n);
}
