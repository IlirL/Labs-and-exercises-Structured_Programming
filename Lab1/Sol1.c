
#include<stdio.h>
int main()
{
    int a1, a2, a3, a4, a5;
    scanf("%d %d %d %d %d", &a1, &a2, &a3, &a4, &a5);
    float avg = (a1 + a2 + a3 +a4+a5)/5.0;
    printf("%.2f", avg);
    return 0;
}
