
#include <stdio.h>
#include <string.h>
#include<ctype.h>
#define MAX 100

int isVowel(char c)
{
    if(!isalpha(c))
    return -1;
    c = tolower(c);
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        return 1;
    return 0;

}

//ne menuvaj!
void wtf() {
    FILE *f = fopen("sp.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}
void rff() {
    FILE *f = fopen("output.txt", "r");
    char c;
    while((c = fgetc(f)) != EOF) {
        putchar(c);
    }
    fclose(f);
}

int main() {
    int k;
    scanf("%d", &k);

    char flush_cin;
    scanf("%c", &flush_cin);
    wtf();

    FILE *f1 = fopen("sp.txt", "r");
    FILE *f2 = fopen("output.txt", "w");
    char c;

    while((c = fgetc(f1)) != EOF)
    {
        if(isVowel(c) == 1)
        {
            for(int i = 0; i<k; i++)
            {
                fputc(c, f2);
            }
        }
        else
        fputc(c, f2);

    }

    fclose(f1);
    fclose(f2);
    rff();
    return 0;

}
