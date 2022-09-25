
#include <stdio.h>
// print all number between 1 to 10 except 6 ;
 int main(){
     for (int i = 1 ; i <= 10 ; i++)
     {
        if (i==6){
            continue; // continue loop when i =5 or skip
        }
        else{
            printf("%d ",i);
        }
     }
    return 0;
 }