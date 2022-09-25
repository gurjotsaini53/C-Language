#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("test.txt", "r");
     char ch='G' ; 
   printf("%c\n",fgetc(fptr));
   printf("%c\n",fgetc(fptr));
   printf("%c\n",fgetc(fptr));
   printf("%c\n",fgetc(fptr));
   printf("%c\n",fgetc(fptr));
  

    fptr = fopen("test2.txt", "w");
   fputc('M',fptr);
   fputc('A',fptr);
   fputc('N',fptr);
   fputc('G',fptr);
   fputc('O',fptr);

    fclose(fptr);
     
    return 0;
}