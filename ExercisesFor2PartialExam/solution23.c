
#include<stdio.h>

void print_one_row(int n)
{
    if(n==1)
    {
        printf("%d", n);
        return;
    }
    print_one_row(n-1);
    printf("%d", n);
}

void tree(int n)
{
    if(n==1)
    {
        print_one_row(n);
        printf("\n");
        return;
    }
    tree(n-1);
    print_one_row(n);
   printf("\n");
}
int main()
{
    int n;
    scanf("%d", &n);
    tree(n);
}
