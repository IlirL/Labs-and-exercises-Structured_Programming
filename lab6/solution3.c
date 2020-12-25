#include<stdio.h>

void printForm(int n)
{
    if(!n)
        return;
    char sign = n%2 ? '*' : '#';
    for(int i = 0; i<n; i++)
        printf("%c", sign);
    printf("\n");
    printForm(n-1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printForm(n);

}
