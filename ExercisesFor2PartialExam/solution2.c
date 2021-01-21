#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>


char shifted_char(int x, char c)
{
    x = x%255;
    c = tolower(c);

    if(c+x <= 122)
        c = c+x;
    else
    {
        c = (c+x)%122 + 96;
    }

    return c;

}

void edit_file()
{
    FILE *ptr_writing = fopen("sifra.txt", "w");
    char c;
    while((c = getchar()) != EOF)
    {
        if(isalpha(c))
        {
            c = shifted_char(3, c);
        }

        fprintf(ptr_writing, "%c", c);
    }
    fclose(ptr_writing);
}

void print_file()
{
    FILE *p = fopen("sifra.txt", "r");
    char c;
    while((c = fgetc(p))!= EOF)
    {
        printf("%c", c);
    }
}



int main()
{
    edit_file();
    print_file();
}
