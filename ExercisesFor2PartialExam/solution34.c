
#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    float niza[n][n];
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            scanf("%f", &niza[i][j]);
        }
    }
    float first_row[n];
    float last_row[n];
    float diagonal[n];

   float z_niza[n+n+n-2];
    int element = 0;

    for(int i = 0; i<n; i++)
    {
        z_niza[element++] = niza[0][i];
        first_row[i] = niza[0][i];
    }
    for(int i = 1; i<n; i++)
    {
        z_niza[element++] = niza[i][n-i-1];
        diagonal[i] = niza[i][n-i-1];

    }
    diagonal[0] = niza[0][n-1];
    for(int i = 1; i<n; i++)
    {
        z_niza[element++] = niza[n-1][i];
        last_row[i] = niza[n-1][i];

    }
    last_row[0] = niza[n-1][0];


    for(int i = 0; i<3*n - 2; i++)
    {
        printf("%.2f ", z_niza[i]);
    }
    printf("\n");

    //lets change the array
    for(int i = 0; i<n; i++)
    {
        niza[0][i] = last_row[n-i-1];
        niza[n-1][i] = first_row[n-i-1];
        if(i>=1 && i<n-1)
        niza[i][n-i-1] = diagonal[n-i-1];
    }

      for(int i = 0; i<n; i++)
    {
      for(int j = 0; j<n; j++)
      {
          printf("%.2f ", niza[i][j]);
      }
       printf("\n");
    }




}
