
#include<stdio.h>
int main()
{
    int sec;
    scanf("%d", &sec);

    int min = sec/60;
    sec -=min*60;
    int h = min/60;
    min-=h*60;
    if(min<10 && sec<10)
            printf("%d:0%d:0%d", h, min, sec);
    else if(min<10)
        printf("%d:0%d:%d", h, min, sec);
    else if(sec<10)
        printf("%d:%d:0%d", h, min, sec);
    else
    printf("%d:%d:%d", h, min, sec);
    return 0;
}
