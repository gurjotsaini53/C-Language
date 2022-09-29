#include <stdio.h>
int main()
{

    int age =22 ;
    int *ptr = &age; // &age represent address of age variable 

    
    int _age = *ptr ; // *ptr represent value at address  
     printf("%d\n",_age);
     printf("%p\n",&age); // address is hexadecimal
     printf("%p\n",ptr);
     printf("%p\n",&ptr);
     printf("%u\n",&ptr); // represent  a unisigned interger value that points to a location

    return 0 ;
}