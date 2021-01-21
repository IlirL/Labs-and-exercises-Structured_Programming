#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int niza[n][n];
    int count = 0;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            scanf("%d", &niza[i][j]);
        }
    }

    //check the diagonal
    for(int i = 0; i<n; i++)
    {
        if(niza[i][i] != 0)
            count++;
    }

    //check the symmetry
    for(int i = 0; i<n; i++)
    {
        //niza[i][j] -> niza[j][i]
        for(int j = i+1; j<n; j++)
        {
            if(niza[i][j] != niza[j][i])
                count++;
        }
    }

    printf("%d", count);

}
