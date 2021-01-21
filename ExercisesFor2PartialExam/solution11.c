
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>

bool positive(int a)
{
    if(a<0)
    return 0;
    else
    return 1;
}


bool possible_neighbour(int x_coord, int y_coord, int x_max, int y_max)
{
    if(x_coord >= 0 && x_coord<x_max && y_coord >= 0 && y_coord<y_max)
        return 1;

    return 0;
}

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);

    int niza[x][y];

    for(int i = 0; i<x; i++)
        for(int j = 0; j<y; j++)
            scanf("%d", &niza[i][j]);

    int b[x][y];
     for(int i = 0; i<x; i++){
        for(int j = 0; j<y; j++)
            {
                int left_neighbour_x = i - 1, left_neighbour_y = j;
                int right_neighbour_x = i+1, right_neighbour_y = j;
                int up_neighbour_x = i, up_neighbour_y = j-1;
                int down_neighbour_x=i, down_neighbour_y = j+1;

                int edit = 0;
                if(possible_neighbour(left_neighbour_x, left_neighbour_y, x, y))
                    if(positive(niza[left_neighbour_x][left_neighbour_y]))
                        edit+=niza[left_neighbour_x][left_neighbour_y];

                 if(possible_neighbour(right_neighbour_x, right_neighbour_y, x, y))
                    if(positive(niza[right_neighbour_x][right_neighbour_y]))
                        edit+=niza[right_neighbour_x][right_neighbour_y];

                     if(possible_neighbour(up_neighbour_x, up_neighbour_y, x, y))
                    if(positive(niza[up_neighbour_x][up_neighbour_y]))
                        edit+=niza[up_neighbour_x][up_neighbour_y];

                         if(possible_neighbour(down_neighbour_x, down_neighbour_y, x, y))
                    if(positive(niza[down_neighbour_x][down_neighbour_y]))
                        edit+=niza[down_neighbour_x][down_neighbour_y];



                b[i][j] = edit;

                printf("%d ", b[i][j]);
            }
            printf("\n");


     }
}
