#include<stdio.h>

void general_sort_array(int niza[], int n)
{
    for(int i = 0; i<n-1; i++)
    {
        if(niza[i] > niza[i+1])
        {
            int temp = niza[i];
            niza[i] = niza[i+1];
            niza[i+1] = temp;
            if(i>0)
                i-=2;
        }
    }
}


void transform(int niza[], int n)
{
    for(int i = 0; i<n-1; i++)
    {
        if(niza[i] == niza[i+1])
        {
            niza[i]*=2;
            niza[i+1] = 0;

            i++;
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int niza[n];

    for(int i = 0; i<n; i++)
    {
        scanf("%d", &niza[i]);
    }

    transform(niza, n);
    //general_sort_array(niza, n);

    for(int i = 0; i<n; i++)
    {
        if(niza[i] != 0)
            printf("%d ", niza[i]);

    }

    int zero_iterator = 0;
    while(zero_iterator<n)
    {
        if(niza[zero_iterator] == 0)
        printf("%d ", niza[zero_iterator]);

        zero_iterator++;
    }
}

