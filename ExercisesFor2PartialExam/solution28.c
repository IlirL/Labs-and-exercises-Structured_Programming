
#include<stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int niza[100][100];
    int save_sum = 100000;
    int save_index;

    for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<n; j++)
            scanf("%d", &niza[i][j]);
    }

    for(int i = 0; i<n; i++)
    {
        int row_sum = 0;
        for(int j = 0; j<m; j++)
        {
            row_sum+=niza[j][i];
        }

        if(row_sum < save_sum)
        {
            save_sum = row_sum;
            save_index = i;
        }
    }
    printf("%d", save_index);
}
