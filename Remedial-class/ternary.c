    
#include <stdio.h>
int main(){
    int b = (1==2) ? 50 : 60 ;
    b = (1==1) ? 50 : 60 ;

    // ? : combined called ternary operator 
     b = (1==1) ? ((2==2)?200 : 300) : 400 ; // nested ternary operator
    printf("%d",b);
}