
#include<stdio.h>
int main()
{
    float mass, height;
    scanf("%f %f", &mass, &height);
    height = height/100;
    height*=height;
    printf("%.2f", mass/height);
    return 0;
}
