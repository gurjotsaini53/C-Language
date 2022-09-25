#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("integer.txt", "r");
     int ch ; 
     fscanf(fptr,"%d",&ch);
     printf("integer = %d\n",ch);
     fscanf(fptr,"%d",&ch);
     printf("integer = %d\n",ch);
     fscanf(fptr,"%d",&ch);
     printf("integer = %d\n",ch);
    

    fclose(fptr);
     
    return 0;
}