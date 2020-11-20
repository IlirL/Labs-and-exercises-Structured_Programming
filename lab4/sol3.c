#include<stdio.h>

int main()
{

    int n; scanf("%d", &n);
    float percentage[n];
    for(int i = 0; i<n; i++)
    {
        int size;
        scanf("%d", &size);

        int niza[size];
        for(int j = 0; j<size; j++)
            scanf("%d", &niza[j]);

        //numerating the percentage
        int symmetricAndEqual = 0;
        if(size%2)
           symmetricAndEqual++;

        for(int j = 0; j<size/2; j++)
        {
            if(niza[j] == niza[size-1-j])
            {
                symmetricAndEqual+=2;
            }
        }
        percentage[i] = (float)symmetricAndEqual * 100 / size;
    }

    for(int i = 0; i<n; i++)
    {
        printf("%.2f%%\n", percentage[i]);
    }
}
