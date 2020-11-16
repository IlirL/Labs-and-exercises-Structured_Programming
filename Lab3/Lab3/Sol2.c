#include<stdio.h>
#include<math.h>

int mymin(int a, int b)
{

    return a > b ? b : a;
}

int main()
{
    int n;
    scanf("%d", &n);
    int points[n], maxPoints[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d %d", &points[i], &maxPoints[i]);
    }

    float percentage; int grade;
    for(int i = 0; i<n; i++)
    {

        percentage = (float)(points[i] * 100) / maxPoints[i];
        if(percentage < 50)
        {
            printf("%.2f FAIL", percentage);
        }
        else
        {
            grade = mymin(10, (int)(percentage/10) + 1);
            printf("%.2f %d", percentage, grade);
        }
        printf("\n");
    }

}
