#include<stdio.h>

int main()
{
    int a, b, z;
    scanf("%d", &z);
    int sumZ = 0;
    int pairs = 0;
    scanf("%d %d", &a, &b);
    while(a!=0 || b!=0)
    {
        if(a+b == z)
            sumZ++;
        pairs++;
        scanf("%d %d", &a,&b);
    }
    printf("You entered %d pair of numbers whose sum is %d\nThe percentage of pairs with sum %d is %.2f%%\n",sumZ, z, z, sumZ*100 / (float)(pairs));

}
