#include <stdio.h>
int main()
{

    int x ; 
    int *ptr; 
    ptr = &x ; 
    *ptr = 0  ;

     printf("%d\n",x);
     printf("%d\n",*ptr);
     

     x++;
     (*ptr)++;
     printf("%d\n",*ptr);
     

    return 0 ;
}