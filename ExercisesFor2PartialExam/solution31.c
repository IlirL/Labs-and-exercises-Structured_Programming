#include <stdio.h>
#include <string.h>
#define MAX 100

//ne menuvaj!
void wtf() {
    FILE *f = fopen("rectangle.in", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();

    FILE *f = fopen("rectangle.in", "r");
    int n;
    fscanf(f, "%d", &n);
    int niza[n];
    for(int i = 0; i<n; i++)
    {
        fscanf(f, "%d", &niza[i]);
    }

    // for(int i = 0; i<n; i++)
    // {
    //   printf("%d ", niza[i]);
    // }

    int appearance[10];
    for(int i = 1; i<10; i++)
        {
            appearance[i] = 0;
            for(int j  =0; j<n; j++)
            {
                if(niza[j] == i)
                appearance[i]++;
            }

          //  printf("number %d appears : %d times\n", i, appearance[i]);
        }

    appearance[0] = -10000;
    //sort
  int save_index_1, save_index_2;
  int max1 = -1 , max2 = -1;
  for(int i = 1; i<10; i++)
    {
        if(max1 < appearance[i])
            {
                max1 = appearance[i];
                save_index_1 = i;
            }
    }
    for(int i = 1; i<10; i++)
    {
        if(i == save_index_1)
            continue;

        else{
            if(max2 <= appearance[i])
            {
                max2 = appearance[i];
                save_index_2 = i;
            }
        }
    }
   // printf("%d   %d", save_index_1, save_index_2);
    if(save_index_2 < save_index_1)
    save_index_1 = save_index_2;

    for(int i = 0; i<save_index_1; i++)
    {
        for(int j = 0; j<save_index_2; j++)
        {
            printf("* ");
        }
        printf("\n");
    }



    // vashiot kod ovde


}

