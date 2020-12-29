#include<stdio.h>
#include<stdlib.h>
float max (float * array, int n)
{
    float max1 = *(array + 0);
    for(int i = 1; i<n; i++)
    {
        if(*(array + i) > max1)
            max1 = *(array + i);

    }

    return max1;
}

float min (float * array, int n)
{

      float min1 = *(array + 0);
    for(int i = 1; i<n; i++)
    {
        if(*(array + i) < min1)
            min1 = *(array + i);

    }

    return min1;
}

void normalize (float * array, int n)
{
    float mymin = min(array, n);
    float mymax = max(array, n);
    printf("MAX -> %.3f", mymax);
    printf("\nMIN -> %.3f\n", mymin);
    for(int i = 0; i<n; i++)
    {
        *(array + i) = ( *(array + i) - mymin) / (mymax - mymin);
    }
}


int comp (const void * elem1, const void * elem2)
{
    float f = *((float*)elem1);
    float s = *((float*)elem2);
    if (f > s) return  -1;
    if (f < s) return 1;
    return 0;
}

void sort (float * array, int n)
{
   // printf("%d", sizeof(array));
        qsort(array, n,sizeof(float),  comp);
}
int main()
{

    int n;
    scanf("%d", &n);
    float array[n];

    for(int i = 0; i<n; i++)
        scanf("%f", &array[i]);
    normalize(array, n);
    sort(array, n);
    //printf("%f", min(array, n));
    //qsort(array, sizeof(array) / sizeof(*array),sizeof(*array),  comp);
    for(int i = 0; i<n; i++)
      printf("%.3f ", array[i]);
}
