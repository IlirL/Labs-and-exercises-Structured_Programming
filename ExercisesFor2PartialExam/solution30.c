#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include<stdbool.h>

#define MAX 31

bool is_vowel(char c)
{
    c = tolower(c);
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        return 1;
    return 0;
}

bool is_palindrome(char niza[])
{
  //  printf("we have %d  letters\n", strlen(niza));
    bool it_is = true;
    // int length = (strlen(niza) %2 == 1)? strlen(niza) /2 : strlen(niza) / 2;//anyways
    int length = (strlen(niza) - 1) / 2;
    for(int i = 0; i<length; i++)
    {
        if(is_vowel(niza[i]))
        {
            if(niza[i] != niza[strlen(niza) -1 -i - 1])
                {it_is = false; break;}

        }
    }
    return it_is;
}

void writeToFile(char * file) {
  FILE *f = fopen(file, "w");
  char c;
  while((c = getchar()) != '#') {
    fputc(c, f);
  }
  fclose(f);
}


int main() {

    char filename[] = "input.txt";
    writeToFile(filename);
    FILE *f = fopen("input.txt", "r");
    char current_row[MAX];
    char curret_row_lowercase[MAX];
    while(fgets(current_row, MAX, f) != NULL)
    {
        int element = 0;
        for(int i = 0; i<strlen(current_row); i++)
        {
           // if(is_vowel(current_row[i]))
                curret_row_lowercase[element++] = tolower(current_row[i]);
        }
        curret_row_lowercase[element] = '\0';

        if(is_palindrome(curret_row_lowercase))
            printf("%s", current_row);
    }
    return 0;
}

