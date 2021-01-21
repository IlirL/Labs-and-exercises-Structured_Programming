#include <stdio.h>
#include <ctype.h>
#include<stdbool.h>
void writeToFile();

int main() {

    bool endline = 0;
    writeToFile();
    FILE *f = fopen("text.txt", "r");
    char c;
    while((c = fgetc(f)) != EOF)
    {
        if((c == ' ' || c == '\n') && !endline)
            {
                printf("\n");
                endline = true;

            }
        if(isalpha(c))
        {
            printf("%c", c);
            endline = false;
        }
    }
    return 0;
}

void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

