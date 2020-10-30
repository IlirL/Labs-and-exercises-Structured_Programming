#include<stdio.h>
#include<stdbool.h>

int prodMid(int x)
{
    x/=10;
    int prod = 1;
    while(x>10)
    {
        prod*=x%10;
        x/=10;

    }
    return prod;
}
int numb(int x)
{
    int num = x%10;
    while(x>10)
        x/=10;
    num+=10*x;
    return num;
}

bool check(int x)
{
    int proD = prodMid(x);
    int n = numb(x);
    if(!proD)
        return 0;
    if(!(proD%n))
        return 1;
    return 0;
}

int main()
{
    int a, b;
    int numbers = 0;

    scanf("%d %d", &a, &b);
      if(a<100)
        a=100;
    if(b<100)
        printf("0");
        else{
    for(; a<=b;a++)
    {

        if(check(a))
        {
            printf("%d -> (%d == %d * %d)\n", a, prodMid(a), numb(a), prodMid(a) / numb(a));
            numbers++;
        }
    }
        }

        printf("%d", numbers);
}
