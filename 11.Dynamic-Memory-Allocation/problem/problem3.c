#include <stdio.h>
#include <stdlib.h>
// wpa to free memory using calloc
int main(){
 
    /*
    free()

    we use it to free memory that is allocated using malloc & calloc
    free(ptr);
    */
   int *ptr = (int * ) calloc (5,sizeof(int));

  

  for (int i =0 ; i<5 ;i++)
  {
    printf("%d\n",ptr[i]);
  }

  free(ptr);
  printf("memory free \n");
 // then  reallocate
ptr = (int * ) calloc (2,sizeof(int));

  for (int i =0 ; i<2 ;i++)
  {
    printf("%d\n",ptr[i]);
  }

}