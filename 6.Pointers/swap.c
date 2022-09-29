#include <stdio.h>
// call by value 
void swap (int a , int b)
{
    int temp  =a ;
    a = b ; 
    b =temp ; 
    printf("a = %d and b = %d \n",a,b);
}
// call by reference 
void _swap(int * a , int *b )
{
    int t = *a; 
    *a = *b ; 
    *b =t; 

}
int main()
{
    int a = 5  , b = 10  ;
    printf("a = %d and b = %d \n",a,b);
    
    // after swaping by call by value ; 
  swap(a,b );
  printf("a = %d and b = %d \n",a,b); // no change in memory ;
 _swap(&a,&b);
  printf("a = %d and b = %d \n",a,b); // no change in memory ;



}