
#include<stdio.h>

int checkmonth(int m)
{
    if(m>12 || m<1)
    return 0;
    else
    return 1;
}

int checkleapyear(int y)
{
    if((y%4 == 0 && y%100 != 0)|| (y%400 == 0))
        return 1;
    else
    return 0;
}

int daysInMonth(int month, int year)
{
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month ==12)
        return 31;
    else if(month == 2)
        {
            if(checkleapyear(year))
            return 29;
            return 28;
        }
    else
    return 30;
}

int main()
{
    int d, m, y;
    scanf("%d %d %d", &d, &m, &y);
    if(checkmonth(m) ==0)
    {
        printf("NO\n");
        return 0;
    }
    int daysMax = daysInMonth(m, y);
    if(d<=daysMax && d>0)
    {
        printf("YES");

    }
    else
    printf("NO");

}
