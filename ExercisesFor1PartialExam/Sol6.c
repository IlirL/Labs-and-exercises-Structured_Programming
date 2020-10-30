#include<stdio.h>
#include<stdlib.h>
int nOfDig(long int x)
{
    if(x<10)
        return 1;
    return 1 + nOfDig(x/10);
}

long int tenToPow(long int x)
{
    if(!x)
        return 1;
    return 10*tenToPow(x-1);
}

long int palindrom(long int x)
{
    long int flipped = 0;
    int dig = nOfDig(x);

    while(x>0)
    {
        //last digit x%10;
        flipped+=x%10 * tenToPow(dig-1);
        dig--;
        x/=10;
    }
    return flipped;
}

int main()
{

    long int n;
    scanf("%ld", &n);
    if(n<9)
        printf("The number is invalid");
    else
    {
        n--;
        for(; n>=9; n--){

        if(palindrom(n)%nOfDig(n) == 0)
           {
               printf("%ld", n);
            break;
           }
        }
    }

}
