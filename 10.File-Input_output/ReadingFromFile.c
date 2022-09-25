#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("creating.txt", "r");
     if (fptr==NULL){
        printf("File does not exit\n");
     }
        
     else{
    fclose(fptr);
     }
    return 0;
}