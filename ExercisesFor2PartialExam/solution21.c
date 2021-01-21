#include<stdio.h>
#include<stdbool.h>
int factorial(int n)
{
    if(n==0)
    return 1;
    return n*(factorial(n-1));
}

int sum_digits_factorial(int n)
{
    // if(n==0)
     //   return 0;
    // int current_digit = n%10;
    // return factorial(current_digit) + sum_digits_factorial(n/10);
    int sum = 0;
    while(n)
    {
        int current_digit = n%10;
        sum+=factorial(current_digit);
        n/=10;
    }
    return sum;
}

bool strong(int n)
{
  // printf("sum_digits_factorial = %d and  n = %d", sum_digits_factorial(n), n);
    if(sum_digits_factorial(n) == n)
        return 1;
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    int niza[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &niza[i]);
    }
    printf("Strong numbers:\n");
      for(int i = 0; i<n; i++)
    {
        if(strong(niza[i]))
            printf("%d\n", niza[i]);
    }

  //  printf("\n%d", factorial(6));
}
