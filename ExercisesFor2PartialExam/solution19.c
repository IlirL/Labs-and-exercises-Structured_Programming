
#include <stdio.h>
//#include<bits/stdc++.h>
 #include<string.h>
 #include<ctype.h>
// DO NOT CHANGE HERE
void
wtf ()
{
  FILE *f = fopen ("datnum.txt", "w");
  char c;
  while ((c = getchar ()) != EOF)
    {
      fputc (c, f);
    }
  fclose (f);
}

int
main ()
{
  wtf ();

  //lets read line by line
  FILE *f = fopen("datnum.txt", "r");
  char current_string[100];
  float save_max_ratio = -100000;
  char save_string[100];
  while(fgets(current_string, 100, f) != NULL)
  {
      int n_of_chars = 0;
      int n_of_digits = 0;
      float current_ratio;
      for(int i = 0; i<strlen(current_string); i++)
      {
          if(isalpha(current_string[i]))
            n_of_chars++;
        else if(current_string[i]<='9' && current_string[i] >='0')
        {
            n_of_digits++;
        }
      }
      if(n_of_chars  == 0)
         continue;
      current_ratio = n_of_digits *1.0 / n_of_chars;
      if(current_ratio >= save_max_ratio)
      {
          save_max_ratio = current_ratio;
          strcpy(save_string, current_string);
      }
  }
  fclose(f);
  printf("%s", save_string);
  return 0;
}
