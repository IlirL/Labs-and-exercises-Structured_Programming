
#include<stdio.h>

int mymax(int a, int b)
{
    if(a>b)
    return a;
    return b;
}

int change(int niza[], int n, int element)
{
    if(element == n/2)
    return 0;
   int save_element = niza[element];
   niza[element] = mymax(niza[element], niza[n-element-1]);
   niza[n-element-1] = niza[element];

   return ((niza[element] == save_element) ? 0 : 1 ) + change(niza, n, element+1);
}


int main()
{
    int n;
    scanf("%d", &n);
    int niza[n];
    for(int i  =0; i<n; i++)
    {
        scanf("%d", &niza[i]);
    }


    printf("%d\n",  change(niza, n, 0));
     for(int i  =0; i<n; i++)
    {
      printf("%d ", niza[i]);
    }

}
