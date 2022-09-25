#include <stdio.h>
 int main(){
     for (int i = 1 ; i < 10 ; i++)
     {
        if (i==5){
            break; // break loop when i =5 
        }
        else{
            printf("%d ",i);
        }
     }
    return 0;
 }