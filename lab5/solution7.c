#include<stdio.h>

int possible_cell(int row, int column, int size_row, int size_column)
{
    if(row >=0 && column >= 0 && row<size_row && column<size_column)
        return 1;

    return 0;
}

void solve(int row, int column)
{
    int a[row][column];
     int b[row][column];
    for(int i = 0; i<row; i++)
        for(int j = 0; j<column; j++)
        {

            scanf("%d", &a[i][j]);
             b[i][j] = 0;
        }

    for(int current_row = 0; current_row<row; current_row++)
    {
        for(int current_column = 0; current_column<column; current_column++)
        {
            //look at the left cell
            if(possible_cell(current_row, current_column-1, row, column) && a[current_row][current_column-1] > 0)
                b[current_row][current_column]+=a[current_row][current_column-1];

            //look at the upper cell
             if(possible_cell(current_row-1, current_column, row, column) && a[current_row-1][current_column] > 0)
                b[current_row][current_column]+=a[current_row-1][current_column];

              //right cell
                 if(possible_cell(current_row, current_column+1, row, column) && a[current_row][current_column+1] > 0)
                b[current_row][current_column]+=a[current_row][current_column+1];

                //down cell
                 if(possible_cell(current_row+1, current_column, row, column) && a[current_row+1][current_column] > 0)
                b[current_row][current_column]+=a[current_row+1][current_column];

            printf("%d ", b[current_row][current_column]);
        }
        printf("\n");
    }



}

int main()
{

    int row, column;
    scanf("%d %d", &row, &column);
    solve(row, column);


}
