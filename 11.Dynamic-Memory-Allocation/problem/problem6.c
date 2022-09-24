 #include <stdio.h>
#include <stdlib.h>
 
 // write a program to allocate memory to store first 5 odd numbers , then reallocate it to store first 6 even numbers. 
 int main() {  
   int *array ; 
   array = (int *)calloc (5,sizeof(int));
   printf("printing odd numbers : ");
    array[0]=1;
    array[1]=3;
    array[2]=5;
    array[3]=7;
    array[4]=9;


   for (int i = 0 ; i < 5 ; i++)
   {
    printf("%d ",array[i]);
   }
  printf("\n");

  // reallocating 

  array = realloc(array,6);


    array[0]=2;
    array[1]=4;
    array[2]=6;
    array[3]=8;
    array[4]=10;
    array[5]=12;
   printf("printing reallocated even numbers : ");

for (int i = 0 ; i < 6 ; i++)
   {
    printf("%d ",array[i]);
   }
  printf("\n");

   free(array);
 return 0 ;
 }