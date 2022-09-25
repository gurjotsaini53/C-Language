
#include <stdio.h>
 int main(){
     for (int i = 1 ; i < 10 ; i++)
     {
        if (i==5){
            continue; // continue loop when i =5 or skip
        }
        else{
            printf("%d ",i);
        }
     }
    return 0;
 }