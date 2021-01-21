#include<stdio.h>


int main()
{
    int n;
    scanf("%d", &n);
    int niza[n][n];
    int main_diagonal[n];
    int anti_diagonal[n];
    for(int i = 0; i<n; i++)
    for(int j = 0; j<n; j++)
    {
        scanf("%d", &niza[i][j]);

    }

    //main diagonal
    for(int i = 0; i<n; i++)
    {
        //current cell -> [i, i]
        //right side of the cell, row
        main_diagonal[i] = 0;
        for(int col = i+1; col<n; col++ )
        {
            main_diagonal[i] += niza[i][col];
        }

        //over the element
        //column is i
        for(int row = i-1; row>=0; row--)
        {
            main_diagonal[i] +=niza[row][i];
        }
    }

    //anti diagonal
    for(int row = 0; row<n; row++)
    {
        int column = n-row-1;
        anti_diagonal[row] = 0;
        //same row before the element

        for(int col = column - 1; col>=0; col--)
        {
             anti_diagonal[row] += niza[row][col];
        }

        //same column below the element
        for(int current_row = row+1; current_row <n; current_row++)
        {
             anti_diagonal[row] += niza[current_row][column];
        }

    }


    //change diagonals
    //main_diagonal
    for(int i = 0; i<n; i++)
    {
        niza[i][i] = main_diagonal[i];
    }
    //anti_diagonal
    for(int i = 0; i<n; i++)
    {
        niza[i][n-i-1] = anti_diagonal[i];
    }

    //center
    if(n%2 == 1)
    niza[n/2][n/2] = main_diagonal[n/2] + anti_diagonal[n/2];
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
            printf("%d ", niza[i][j]);
        printf("\n");

    }
}
