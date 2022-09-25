#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("writing1.txt", "w");
     char ch='G' ; 
   
  fprintf(fptr,"%c",ch);
  fprintf(fptr,"%c",'U');
  fprintf(fptr,"%c",'R');
  fprintf(fptr,"%c",'J');
  fprintf(fptr,"%c",'O');
  fprintf(fptr,"%c",'T');
    fclose(fptr);
     
    return 0;
}