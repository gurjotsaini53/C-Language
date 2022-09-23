#include <stdio.h>
int main(){

    int num ; 
    printf("Enter Number : ");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("%d is divisible by 2\n ",num);
    }
    else{
        printf("%d  is not divisible by 2\n ",num);

    }
}