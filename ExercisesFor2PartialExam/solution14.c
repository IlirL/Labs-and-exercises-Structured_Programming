#include<stdio.h>

int
main ()
{
  int n;
  scanf ("%d", &n);

  int niza[n][n];

  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      scanf ("%d", &niza[i][j]);

  //above main diagonal
  //main diagonal element [i][i]
  int upper_max = -100000;
  for (int i = 0; i < n; i++)
    {
      for (int j = i + 1; j < n; j++)
	{
	  //find the maximum

	  if (upper_max < niza[i][j])
	    upper_max = niza[i][j];
	}
    }


     for (int i = 0; i < n; i++)
    {
      for (int j = i + 1; j < n; j++)
	{
	  //find the maximum

	 niza[i][j] = upper_max;
	}
    }

    //below main diagonal minimum
    int below_min = 100000;
    for(int i = 0; i<n; i++)
    {
        for(int j = i-1; j>=0; j--)
        {
            if(below_min > niza[i][j])
            below_min = niza[i][j];
        }
    }
  //assign

  for(int i = 0; i<n; i++)
    {
        for(int j = i-1; j>=0; j--)
        {
      //      if(below_min > niza[i][j])
    //        below_min = niza[i][j];
        niza[i][j] = below_min;
        }
    }


    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            printf("%d ", niza[i][j]);
        }
        printf("\n");
    }
}

