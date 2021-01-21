
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>



char shifted_char(int x, char c)
{
    x = x%255;
    char save_char = c;
    bool lower = 0;
    c = tolower(c);
    if(c == save_char)
     lower = 1;

    // printf("we are in the function with c = %c", c);


    if(c+x <= 122)
        c = c+x;
    else
    {
        c = (c+x)%122 + 96;
    }

    if(lower == 1)
    return c;
    else
    return toupper(c);
}

int main()
{
    int n, x;
    scanf("%d%d", &n, &x);

    char strings[n][80];
    char flush;
    scanf("%c", &flush);
    for(int i = 0; i<n; i++)
    {
        fgets(strings[i], 79, stdin);
    }

   // printf("%s", strings[0]);
    //printf("%s", strings[1]);

    //printf("%d", strlen(strings[1]));
    for(int i = 0; i<n; i++)
    {
        //strings[i]
        for(int j = 0; strings[i][j] != '\0'; j++)
        {
            if(isalpha(strings[i][j]))
            {
               // printf("We are in. Prev %c", strings[i][j]);
                strings[i][j] = shifted_char(x, strings[i][j]);
               //printf(", after: %c\n", strings[i][j]);
            }
             //printf("%c", strings[i][j]);

        }
        printf("%s", strings[i]);
        //printf("\n");

    }

}
