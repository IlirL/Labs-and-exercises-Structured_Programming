
#include <stdio.h>
#include <stdlib.h>


int chToInt(char s[9])
{
    int num ;
    num = (s[4] - '0') * 1000 + (s[5] - '0') * 100 + (s[6] - '0') * 10 + (s[7] - '0');
    return num;
}


int month(char s[9])
{
    int num = (s[2] - '0') * 10 + (s[3] - '0');
    return num;
}

int day(char s[9])
{
    int num = (s[0] - '0') * 10 + (s[1] - '0');
    return num;
}

int main()
{
    char date[9];
    scanf("%s", date);

    int dates;
    scanf("%d", &dates);
    char niza[dates][9];
    for(int i = 0;i <dates; i++)
    {
        scanf("%s", niza[i]);
    }
    int y = chToInt(date);
    int m = month(date);
    int d = day(date);

    //printf("year = %d , month = %d,  day = %d\n", y, m, d);
    int tempYear, tempMonth, tempDay;
    for(int i = 0; i<dates; i++)
    {
        //printf("year%d = %d, month = %d, day = %d\n", i, chToInt(niza[i]), month(niza[i]), day(niza[i]));
        tempYear = chToInt(niza[i]);
        if(y-tempYear < 18)
            printf("NO");
        else if(y-tempYear > 18)
            printf("YES");
        else
        {
            //we check the month;
            //compare the months
            tempMonth = month(niza[i]);
            if(tempMonth>m)
                printf("NO");
            else if(tempMonth < m)
                printf("YES");
            else
            {
                //compare the days
                tempDay = day(niza[i]);
                if(tempDay <= d)
                    printf("YES");
                else if(tempDay > d)
                    printf("NO");
            }

        }
        printf("\n");
    }
}
