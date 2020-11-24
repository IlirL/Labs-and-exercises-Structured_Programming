#include<stdio.h>
#include<stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);

    int m;
    for(int i = 0; i<n; i++)
    {
        int difference;
        float coefficient;
        bool arithmetic = 1, geometric = 1;
        scanf("%d", &m);
        int n, previousn;
        if(m==1 || m==2)
            printf("BOTH ARITHMETIC AND GEOMETRIC PROGRESSION");
        else
        {
            scanf("%d %d", &previousn,&n);
            difference = previousn - n;
            coefficient = (float)previousn / n;
            previousn = n;
            for(int i = 2; i<m; i++)
            {
                scanf("%d", &n);
                if(previousn - n != difference)
                    arithmetic = 0;
                if((float)previousn / n != coefficient)
                geometric = 0;

                previousn = n;
            }

            if(arithmetic && geometric)
                printf("BOTH ARITHMETIC AND GEOMETRIC PROGRESSION");
            else if(arithmetic)
                printf("ARITHMETIC PROGRESSION");
            else if(geometric)
                printf("GEOMETRIC PROGRESSION");
            else
                printf("THE SEQUENCE IS NOT A PROGRESSION");

                printf("\n");

        }
    }

}
