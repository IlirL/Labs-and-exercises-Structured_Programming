
#include <stdio.h>

int all_chars = 0;

void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
        if((c>=65 && c<=90) || (c>=97 && c<=122))
           {
               //printf("we are here with c= %c\n", c);
               all_chars++;


           }

    }
    fclose(f);
}

 double relativeFrequency (FILE * fileName2, char letter)
 {
     int ocurrence = 0;
     char iterator;
     fileName2 = fopen("text.txt", "r");

     iterator = fgetc(fileName2);
     while(!feof(fileName2))
     {
         char upper_case, lower_case;
          if(letter>=65 && iterator<=90){
            upper_case = letter;
            lower_case = letter+32;
          }
          else if(letter>=97 && letter<=122)
          {
          lower_case = letter;
          upper_case = letter - 32;
          }
        if(iterator == upper_case || iterator == lower_case)
            {
                ocurrence++;
            }
        iterator = fgetc(fileName2);
     }
     fclose(fileName2);
    // printf("relative = %f\n", (double)ocurrence * 100 / all_chars);
     return (double)ocurrence / all_chars;
 }

void printRelativeFrequencies(FILE *fileName1)
{
    fileName1 = fopen("text.txt", "r");
    for(char i = 'A'; i<='Z'; i++)

    {
        printf("%c -> %.5f\n", i, relativeFrequency(fileName1, i));
    }
}

int main() {

    /*
    DO NOT EDIT THE MAIN FUNCTION!!!!
    DO NOT DELETE THE writeToFile FUNCTION!!!
    */
    writeToFile();
   // printf("all_chars = %d \n", all_chars);
    FILE * fileName = fopen("text.txt", "r");
    //double d = relativeFrequency (fileName, 'a');
    printRelativeFrequencies(fileName);
    fclose(fileName);


}
