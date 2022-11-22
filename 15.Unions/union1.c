#include <stdio.h>

union A
{
    /* data */
    int a,b,c ; 
}A1;

int main(){
    // size of the instance of the union will hold the variable having maximum size and all variables have shared memory
    printf("%d",sizeof(A1));
}