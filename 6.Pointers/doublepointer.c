#include <stdio.h>

// print the value of 'i' from its pointer to pointer
int main()
{
  int i = 5 ; 
  int *ptr = &i  ;
  int **pptr = &ptr ; 

  printf("%d",*(*pptr));
    return 0 ;
}