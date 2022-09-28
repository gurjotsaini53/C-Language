#include <stdio.h>
int fact(int n )
{
    int f = 1 ; 
    if (n==1)
    return 1 ;

    f  = n * fact(n-1);
    
    return f ; 
}
int main(){
  printf("%d",fact(5));
}