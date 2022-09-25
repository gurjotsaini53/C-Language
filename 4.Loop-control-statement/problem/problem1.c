#include <stdio.h>
// keep entering the user input until it enter a odd number 
 int main(){
    // int n ; 
    // scanf("%d",&n);
     // while(n%2==0)
     // {
     //     scanf("%d",&n);
     // }




         int n ; 
     do{
         scanf("%d",&n);
         printf("%d\n",n);
         if (n%2!=0)
         {
            break;
         }
     }

     while(1);
         printf("Thank You");

    return 0;
 }