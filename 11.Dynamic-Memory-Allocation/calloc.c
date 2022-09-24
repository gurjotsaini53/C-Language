#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
    calloc()---- continuous allocation


    initializes with 0 ; 

    ptr = (int *) calloc(5,sizeof(int));
    */

   int *ptr = (int * ) calloc (5,sizeof(int));
   for (int i = 0 ; i < 5;i++)
   {
    printf("%d\n",ptr[i]);
   }

}