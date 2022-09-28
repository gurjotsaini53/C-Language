#include <stdio.h>

// write a function to print the nth term of the fibonacci sequence 
int fibo(int n)
{
  if (n== 0)
    return 0  ;

    if (n==1)
    return 1 ; 

    int fibo1 = fibo(n-1);
    int fibo2 = fibo(n-2);
    int fibiN = fibo1 + fibo2 ;
    return fibiN;
}
int main(){
    printf("%d\n",fibo(6));
  return 0 ; 
  }


