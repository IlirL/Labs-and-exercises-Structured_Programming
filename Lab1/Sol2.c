
#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    printf("%d x %d", a/5000, 5000);
    printf("\n");
    a = a - (a/5000) * 5000;
        printf("%d x %d", a/1000, 1000);
            printf("\n");

        a -=a/1000 * 1000;
    printf("%d x %d", a/500, 500);
        printf("\n");

    a-=a/500*500;
    printf("%d x %d", a/100, 100);
    printf("\n");

    a-=a/100*100;
    printf("%d x %d", a/50,50);
    printf("\n");

    a-=a/50*50;
    printf("%d x %d", a/10, 10);
    printf("\n");

    a-=a/10*10;
    printf("%d x %d", a/5, 5);
    printf("\n");

    a-=a/5*5;
    printf("%d x %d",a/2, 2);
    printf("\n");

    a-=a/2*2;
    printf("%d x %d", a, 1);
    printf("\n");

    return 0;

}
