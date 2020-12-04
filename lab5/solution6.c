#include<stdio.h>


void solve(int n)
{
    int niza[n][n];
    for(int i = 0; i<n; i++)
        for(int j = 0; j<n; j++)
            scanf("%d", &niza[i][j]);
    int max_above = -100000;
    int min_below = 100000;



     for(int row = 1; row<n; row++)
    {
        for(int column = 0; column<row; column++)
        {
            //below the main diagonal
            if(min_below > niza[row][column])
                min_below = niza[row][column];

            //its opposite cell which is on the upper diagonal
            if(max_above < niza[column][row])
            max_above = niza[column][row];
        }
    }

     //Assign the new values

      for(int row = 1; row<n; row++)
        {
            for(int column = 0; column<row; column++)
            {
                //below cell
                niza[row][column] = min_below;

                //upper cell
                niza[column][row] = max_above;
            }
        }

        //print the matrix;

         for(int i = 0; i<n; i++){

            for(int j = 0; j<n; j++)
                printf("%d ", niza[i][j]);

                printf("\n");
         }
}

int main()
{
    int n;
    scanf("%d", &n);
    solve(n);

}
