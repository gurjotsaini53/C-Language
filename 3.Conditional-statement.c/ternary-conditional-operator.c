#include <stdio.h>
int main(){
    int age ; 
    printf("Enter Your age : ");
    scanf("%d",&age);

    // use only if executeable statement is of one line 
    age>=18 ? printf("Adult\n") : printf("Not Adult \n");
}