
#include<stdio.h>
#include<stdbool.h>

bool possible_neighbour(int x, int y, int n)
{
    if(x>=0 && x<n && y>=0 && y<n)
        return 1;
    return 0;
}


int main()
{
    int n;
    scanf("%d", &n);
    int niza[n][n];
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        scanf("%d", &niza[i][j]);
    }

    int niza_b[n][n];
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            int up_x = i - 1;
            int up_y = j;
            int down_x = i+1;
            int down_y = j;
            int left_x = i;
            int left_y = j - 1;
            int right_x = i;
            int right_y = j+1;

            int one_neighbours = 0;

            //up neighbour
            if(possible_neighbour(up_x, up_y, n))
                if(niza[up_x][up_y] == 1)
                    one_neighbours++;

            //down neighbour
            if(possible_neighbour(down_x, down_y, n))
                if(niza[down_x][down_y] == 1)
                    one_neighbours++;
            //left neighbour
            if(possible_neighbour(left_x, left_y, n))
                if(niza[left_x][left_y] == 1)
                    one_neighbours++;

            //right neighbour
            if(possible_neighbour(right_x, right_y, n))
                if(niza[right_x][right_y] == 1)
                    one_neighbours++;

            if(one_neighbours >=3)
                niza_b[i][j] = 1;
            else
                 niza_b[i][j] = niza[i][j];
        }
    }

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            printf("%d ", niza_b[i][j]);
        }
        printf("\n");
    }
}
