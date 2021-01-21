#include<stdio.h>
#include<stdbool.h>

bool last_digit_even( int n)
{
    // printf("i am in last_digit_even and n = %d\n", n);
    if((n%10)%2 == 0)
    return 1;
    return 0;

}
bool first_digit_odd( int n)
{
//   printf("i am in first_digit_odd and n = %d\n", n);
    if(n<10)
    {
        if(n%2)
            return 1;
        return 0;
    }
    return first_digit_odd(n/10);
}
bool criteria( int n)
{
    // printf("i am in criteria and n = %d\n", n);
    if(first_digit_odd(n) && last_digit_even(n))
        return 1;
     return 0;
}


int main()
{
    bool printed_out = false;
    int n;
    scanf("%d",&n);
    int niza[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &niza[i]);
    }
     for(int i = 0; i<n; i++)
    {
        if(criteria(niza[i]))
         {
             printf("%d\n", niza[i]);
                printed_out = true;
         }
    }
    if(!printed_out)
        printf("No such elements!");
}
