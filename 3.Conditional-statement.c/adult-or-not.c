#include <stdio.h>
int main(){
    int age ; 
    printf("Enter Your age : ");
    scanf("%d",&age);
    if (age>=18){
        printf("You are Adult , you can vote \n");

    }
    else{
        printf("You are not a Adult , you can't vote \n");
        
    }
    return 0 ; 
}