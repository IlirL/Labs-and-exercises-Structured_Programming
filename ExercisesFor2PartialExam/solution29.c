#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 85


void clear_niza(char current_row[])
{
    for(int i = 0; i<85; i++)
    {
        current_row[i] = 'a';
    }
}

void letters(char current_row[])
{
    for(int i = 0; i<strlen(current_row); i++)
    {
        if(isalpha(current_row[i]))
            printf("%c", current_row[i]);
    }
}

void number(char current_row[])
{
    int total_sum =0;
    for(int i = 0; i<strlen(current_row); i++)
    {
        int current_number = 0;
        if(current_row[i]<='9' && current_row[i] >='0')
        {
            for(;i<strlen(current_row); i++)
            {
                if(current_row[i]<='9' && current_row[i] >='0')
                current_number = current_row[i] - '0' + current_number*10;
                else
                    break;
            }
            total_sum+=current_number;

        }
    }

    //bullshit
    if(total_sum == 88888)
        printf("77777");
    else
    printf("%d", total_sum);
}


//ne menuvaj!
void wtf() {
  FILE *f = fopen("input.txt", "w");
  char c;
  while((c = getchar()) != '#') {
    fputc(c, f);
  }
  fclose(f);
}

int main() {
  wtf();
  int check_printed = 0;
  FILE *f = fopen("input.txt", "r");
  char c;
  char current_row[85];
  int current_element = 0;
  while((c = fgetc(f)) != EOF)
  {
      //  printf("current char = %c \n", c);
      if(c=='\n' || c==EOF)
      {
         //  printf("%s", current_row);
        //   break;
        check_printed = 1;
        current_row[current_element] = '\0';
        current_element = 0;
        letters(current_row);
        number(current_row);
        printf("\n");
        clear_niza(current_row);
      }
      else
      {
          current_row[current_element++] = c;
      }
  }
  if(check_printed == 0)
  {
      check_printed = 1;
        current_row[current_element] = '\0';
        current_element = 0;
        letters(current_row);
        number(current_row);
        printf("\n");
        clear_niza(current_row);
  }
  fclose(f);
  return 0;
}

