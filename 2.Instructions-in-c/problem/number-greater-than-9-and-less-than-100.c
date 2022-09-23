
#include <stdio.h>
int main(){

   // if a number is greater than 9 & less than 100 --> true

   int num  ; 
   printf("Enter a number : ");
   scanf("%d",&num);
   if(num>9 && num<100){
    printf("True\n");

   }
   
   else{
    printf("False\n");
   }
}