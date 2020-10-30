#include<stdio.h>
#include<stdlib.h>

int myabs(int x)
{
    if(x<0)
        x*=-1;
    return x;
}

int mymin(int a, int b)
{
    if(a>b)
        return b;
    return a;
}

int mymin3(int a, int b, int c)
{
    if(a>=b)
    {
        if(b>=c)
            return 3;
        //here we have c>b
       /* else if(c>=a)
        return 2;
        //no c>b and a>c
        else
            return 2
         */
         return 2;
    }
    else
    {
        //now b>a
        if(a>=c)
            return 3;
        return 1;
    }
}

void out(int number, int a, int b, int c)
{
    if(number == 1)
    {
        //ab
        printf("%d %d", mymin(a, b), a+b-mymin(a,b));
    }
    else if(number==2)
    {
        //bc
        printf("%d %d", mymin(b, c), b+c-mymin(b, c));

    }
    else
    {
        //ac
        printf("%d %d", mymin(a, c), a+c-mymin(a,c));
    }
}

int mymax(int a, int b)
{
    if(a>=b)
        return a;
    return b;
}

int main()
{

    int a, b, c;
    while(scanf("%d %d %d", &a, &b, &c))
    {
        int ab = myabs(a-b);
        int bc = myabs(b-c);
        int ac = myabs(a-c);

        //there is one problem
        //that problem is that you can have two same differences
        //in that case you print out all three of the numbers

        //check if you have two eqaul
        if((ab==bc  && ab<ac)  || (ab == ac && ab<bc)|| (bc == ac && bc<ab))
        {
            printf("%d %d %d", mymin(mymin(a, b), c), a+b+c -  mymin(mymin(a, b), c) - mymax(mymax(a,b), c),mymax(mymax(a,b), c ));
        }
        else
        {

                out(mymin3(ab, bc, ac), a, b, c);
        }
        printf("\n");
    }
}
