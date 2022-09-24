#include <stdio.h>
#include <stdlib.h>
  // write a program to allocate memory to store 5 prices ; 

int main(){
   float *prices ; 
   prices = (float * )malloc(5*sizeof(float));
   prices[0]=1;
   prices[1]=3;
   prices[2]=5;
   prices[3]=7;
   prices[4]=5;

   for (int i=0;i<5 ;i++)
   {
    printf("%f\n",prices[i]);
   }
}