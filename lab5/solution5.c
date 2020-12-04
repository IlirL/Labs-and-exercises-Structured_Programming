#include<stdio.h>


void count_change(int n)
{
    int count = 0;
    int niza[n][n];
    for(int i = 0; i<n; i++)
        for(int j = 0; j<n; j++)
            scanf("%d", &niza[i][j]);


    //check the main diagonal
    for(int i = 0; i<n; i++)
    {
        if(niza[i][i] != 0)
            count++;
    }

    //Now let's check the symmetry
    //for cell i j , symmetrical cell is j i
    for(int row = 1; row<n; row++)
    {
        for(int column = 0; column<row; column++)
        {
            //check symmetry of cell [row][column]
            if(niza[row][column] != niza[column][row])
                count++;
        }
    }
    printf("%d",  count);
}

int main()
{
    int n;
    scanf("%d", &n);
    count_change(n);
}
