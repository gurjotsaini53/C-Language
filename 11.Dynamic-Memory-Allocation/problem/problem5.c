 #include <stdio.h>
#include <stdlib.h>
 
 // write a program to create a array of size 5 (using calloc) & enter its values from the user. 
 int main() {  
   int *array ; 
   array = (int *)calloc (5,sizeof(int));
    printf("Enter 5 Numbers : ");

   for (int i = 0 ; i < 5 ; i++)
   {
    scanf("%d",&array[i]);
   }
   // print 
    printf("Printing 5 Numbers of array : ");

   for (int i = 0 ; i < 5 ; i++)
   {
    printf("%d ",array[i]);
   }
  printf("\n");

   
 return 0 ;
 }