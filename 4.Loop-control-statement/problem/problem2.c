#include <stdio.h>
// keep entering the user input until it enter a  number mutliple of 7 
 int main(){
     int n ; 
     do{
         scanf("%d",&n);
         printf("%d\n",n);
         if (n%7==0)
         {
            break;
         }
     }

     while(1);
         printf("Thank You");

    return 0;
 }