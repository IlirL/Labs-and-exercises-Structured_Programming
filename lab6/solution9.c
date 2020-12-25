#include<stdio.h>

void triangle(int n)
{
    if(!n)
        return;
    for(int i = 1; i<=n; i++)
        printf("%d ", i);
    printf("\n");
    triangle(n-1);


}

int main()
{
    int n;
    scanf("%d", &n);
    triangle(n);
}
