#include<stdio.h>
#include<math.h>

int digitsCount(int n)
{
    int digits = 0;
    while(n>0)
    {
        digits++;
        n/=10;
    }

    return digits;
}

int getHalfOf(int number, char part)
{
    int nOfDigits = digitsCount(number);
    int middle = nOfDigits/2;
    int left = 0, right = 0;
    if(nOfDigits%2)
    {
        left = (int)(number / pow(10, middle+1));
        right = number % (int)pow(10, middle);
    }
    else
    {
        left = (int)(number / pow(10, middle));
        right = number % (int)(pow(10, middle));
    }

    if(part == 'L')
        return left;
    else
        return right;

}

void printInRange (int a, int b, char part)
{
   for(a;a<=b;a++)
        {
            if(getHalfOf(a, part) % digitsCount(a) == 0)
                printf("%d\n", a);
        }

}

int main()
{

    int a, b;
    scanf("%d %d", &a, &b);


    printf("LEFT PARTS TEST:\n");
    printInRange(a, b, 'L');
    printf("RIGHT PARTS TEST:\n");
    printInRange(a, b, 'R');
}
