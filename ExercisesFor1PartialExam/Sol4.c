#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);

    int niza[n][2];
    for(int i = 0; i<n; i++)
        scanf("%d %d", &niza[i][0], &niza[i][1]);
    float percent;
    for(int i = 0; i<n; i++)
    {
        percent = niza[i][0] * 100 / (float)(niza[i][1]);

        printf("%.2f ", percent);
        if(percent<50)
            printf("FAIL");
        else if(percent == 100)
            printf("10");
        else
        {
            int grade = percent/10 + 1;
            printf("%d", grade);
        }
        printf("\n");
    }

}
