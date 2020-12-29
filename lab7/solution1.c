#include<stdio.h>


void increment (int *a)
{
    *a = *a+1;
}

void decrement (int *a)
{
    *a = *a - 1;
}

void compare (int a, int b, char operator, int *result)
{
    operator = '>';
    *result = a>b;
    printf("%d %c %d -> %d\n", a, operator, b, *result);

    operator = '<';
    *result = a<b;
    printf("%d %c %d -> %d\n", a, operator, b, *result);

    operator = '=';
    *result = a==b;
    printf("%d %c %d -> %d\n", a, operator, b, *result);
}
int main()
{
    int a, b, result;
    scanf("%d %d", &a, &b);
    increment(&a);
    decrement(&b);
     printf("Incremented a: %d\nDecremented b: %d\n", a, b);
    compare(a, b, '>', &result);



}
