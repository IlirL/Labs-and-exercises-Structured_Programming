#include <stdio.h>
#include <stdlib.h>

int main()
{
int m,n,i,j,index=0,flag,k;
do{
scanf("%d %d",&m,&n);
}
while(m>100 || n>100);

int matrica[100][100],niza[10000];


for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    {
        scanf("%d",&matrica[i][j]);
    }

// for(i=0;i<m;i++)
//     for(j=0;j<n;j++)
//     {
//       printf("%d ",matrica[i][j]);
//     }
for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
{    flag=1;
      for(k=0;k<n;k++)
    {
        // printf("we are in number %d\n", matrica[i][j]);
        if(matrica[i][j]==matrica[i][k] && flag && k!=j)
        {
            flag=0;
        }
    }
    if (flag){
        niza[index]=matrica[i][j];
        index++;
    }

}
    }

    if(index==0)
    {
        printf("N");
    }
    else
    {
    for(i=0;i<index;i++)
    {
        printf("%d ",niza[i]);
    }
    }
    return 0;
}
