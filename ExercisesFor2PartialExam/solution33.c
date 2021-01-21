
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void writeToFile(char * file) {
  FILE *f = fopen(file, "w");
  char c;
  while((c = getchar()) != '#') {
    fputc(c, f);
  }
  fclose(f);
}

void appearance(int letters[], char word[])
{
    for(int i = 0; i<26; i++)
    {
        for(int j = 0; j<strlen(word); j++)
        {
            if(word[j] == 'a' + i)
                letters[i]++;
        }
    }
}

void clear_niza(int letter[])
{
    for(int i = 0; i<26; i++)
    {
        letter[i] = 0;
    }
}

int number_different_letters(int letter[])
{
    int number = 0;
    for(int i = 0; i<26; i++)
    {
        if(letter[i] > 0)
            number++;
    }
    return number;
}

int main() {
  writeToFile("input.txt");

  FILE *f = fopen("input.txt", "r");
  char word[20];
  int letters[26];

  int save_number_letters = -1;
  char save_word[20];

  clear_niza(letters);
  while(fscanf(f, "%s", word) == 1)
  {
      if(strlen(word) < 4)
      continue;
      else
      {
          appearance(letters, word);
          if(save_number_letters <= number_different_letters(letters))
            {
                save_number_letters = number_different_letters(letters);
                strcpy(save_word, word);
            }
        clear_niza(letters);
      }
  }
  printf("%s", save_word);



  return 0;
}
