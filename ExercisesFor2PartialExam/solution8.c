
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{

    int m, n;
    scanf("%d %d", &m, &n);

    int niza[m][n];

    for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<n; j++)
        {
            scanf("%d", &niza[i][j]);
        }
    }

    if(m%2 == 0)
    {
        int middle_element2 = m / 2;
        int middle_element1 = m/2 - 1;

        for(int column = 0; column < n; column++)
        {
            int sumUp = 0, sumBottom = 0;

            for(int row = 0; row<=middle_element1; row++)
            {
                sumUp+=niza[row][column];
            }

            for(int row = middle_element2; row<m; row++)
            {
                sumBottom+=niza[row][column];
            }

             niza[middle_element1][column] = abs(sumUp - sumBottom);
            niza[middle_element2][column] = niza[middle_element1][column];
        }
    }
    else
    {
        int middle = m/2;

        for(int col = 0; col<n; col++)
        {
            int sumUp=0, sumBottom = 0;
            for(int row = 0; row<middle; row++)
            {
                sumUp += niza[row][col];
            }
            for(int row = middle+1; row<m; row++)
                sumBottom+=niza[row][col];

            niza[middle][col] = abs(sumUp - sumBottom);
        }
    }

    for(int i = 0; i<m; i++)
        {
            for(int j = 0; j<n; j++)
                printf("%d ", niza[i][j]);
            printf("\n");
        }
}
