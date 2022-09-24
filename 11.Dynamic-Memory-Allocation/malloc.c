#include <stdio.h>
#include <stdlib.h>
// include  <stdlib.h> which provide us facility of DMA
int main(){
    /*
     malloc()--memory allocation

     takes memory of bytes ti be allocated % return a pointer of type void 

     ptr = (*int)malloc(5*sizeof(int));

    */
  int *ptr ;
  ptr = (int*) malloc(5 * sizeof(int));

  ptr[0]=1;
  ptr[1]=3;
  ptr[2]=5;
  ptr[3]=7;
  ptr[4]=9;

  for (int i =0 ; i<5 ;i++)
  {
    printf("%d\n",ptr[i]);
  }


  // when our system will not be able to provide us the memory (due to memory full etc )it the malloc function will return NULL 
   return 0 ;
}