//I will get the whole number and put it in an array
#include<stdio.h>
int nDig(int a)
{
    int dig = 0;
    while(a>0)
    {
        dig++;
        a/=10;
    }
    return dig;
}

int powTen(int a)
{
    int pow = 1;
    while(a>0)
    {
        pow*=10;
        a--;
    }
    return pow;
}

void formN(int n, int copyn, int *num, int *dig)
{
    if(n>=100)
    formN(n/10,copyn,  num, dig);

    if(n == copyn)
        return;
    *num=*num + n%10 * powTen(*dig);
    *dig = *dig+1;
}

int sum(int a)
{
    int s = a%10;
    while(a>=10)
    {
        a/=10;
    }
    s+=a;
    return s;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if(b<100)
    {
        printf("0");
        return 0;
    }

    if(a<100)
        a = 100;
    int count = 0;
int num = 0;
        int dig = 0;
    for(; a<=b; a++)
    {
        num = 0, dig = 0;
        formN(a, a,&num, &dig);
        if(num%sum(a) == 0 && num)
        {
        printf("%d -> (%d == (%d + %d) * %d)\n",a, num, a%10, sum(a) - a%10, num / sum(a));
        count++;
        }
    }
    printf("%d", count);

}
