#include <stdio.h>
#include <stdlib.h>

int main(){
 /*
  realloc()
  reallocate (increase or decrease ) memory using the same pointer & size

  ptr = realloc(ptr,newSize);
 */
    // write a program to allocate memory for 5 numbers . then dynamically increase it to 8 numbers. 
     
   int *ptr ; 
   ptr = (int *)calloc (5,sizeof(int));
    printf("Enter 5 Numbers : ");

   for (int i = 0 ; i < 5 ; i++)
   {
    scanf("%d",&ptr[i]);
   }
   // print 
    printf("Printing 5 Numbers : ");

   for (int i = 0 ; i < 5 ; i++)
   {
    printf("%d ",ptr[i]);
   }
  printf("\n");

    printf("Rellocation to 8 Number: ");
    ptr = realloc(ptr,8);
for (int i = 0 ; i < 8 ; i++)
   {
    scanf("%d",&ptr[i]);
   }

    printf("Now printing newly allocated 8 numbers :-\n");

for (int i = 0 ; i < 8 ; i++)
   {
    printf("number %d is %d\n",i,ptr[i]);
   }



}