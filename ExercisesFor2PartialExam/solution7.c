
#include<stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    int niza[m][n];
    for(int i = 0; i<m; i++)
        for(int j = 0; j<n; j++)
            scanf("%d", &niza[i][j]);

    int coordinate_x, coordinate_y;
    scanf("%d %d", &coordinate_x, &coordinate_y);

    //niza[coordinate_x][coordinate_y];

    if(niza[coordinate_x][coordinate_y] == 0)
    {
    //up
    int x_up = coordinate_x;
    int y_up = coordinate_y - 1;

    while(niza[x_up][y_up] != 1 && y_up>=0)
    {
        niza[x_up][y_up] = 1;
        y_up--;
    }

    //left
    int leftx = coordinate_x - 1;
    int lefty = coordinate_y;

    while(niza[leftx][lefty] != 1 && leftx >= 0)
    {
        niza[leftx][lefty]  = 1;
        leftx--;
    }

    //down

    int downx = coordinate_x;
    int downy = coordinate_y + 1;

    while(niza[downx][downy] != 1 && downy <n)
    {
        niza[downx][downy] = 1;
        downy++;
    }

    //right
    int rightx = coordinate_x + 1;
    int righty = coordinate_y;

    while(niza[rightx][righty] != 1 && rightx < m)
    {
        niza[rightx][righty] = 1;
        rightx++;
    }
    }
    niza[coordinate_x][coordinate_y] = 1;

    for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<n; j++)
            printf("%d ", niza[i][j]);

        printf("\n");
    }
}
