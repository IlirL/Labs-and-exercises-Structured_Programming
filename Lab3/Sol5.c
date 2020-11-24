#include<stdio.h>
#include<stdbool.h>
int main()
{

    int n;
    scanf("%d", &n);

    float mean1 = 0, mean2 = 0;
    bool calculate = 0;
    int a, b, nOfNums = 0;;

    for(int i = 0; i<n; i++)
    {
        scanf("%d %d", &a, &b);
        if(a!=-1 && a!=-1)
        {
            calculate = 1;
            mean1 += a;
            mean2 += b;
            nOfNums++;
        }
    }
    if(!calculate)
    {

        printf("PM10: Can not be calculated\nPM2.5: Can not be calculated\n");
    }
    else
    {
        mean1/=nOfNums;
        mean2/=nOfNums;
        printf("PM10: %.2f\nPM2.5: %.2f", mean1, mean2);

    }
}
