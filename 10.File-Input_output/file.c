#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("Newtest.txt", "r");
     if (fptr==NULL){
        printf("File does not exit\n");
     }
        
     else{
    fclose(fptr);
     }
    return 0;
}