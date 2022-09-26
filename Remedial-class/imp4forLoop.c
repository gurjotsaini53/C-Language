#include <stdio.h>
int main(){
 int i = 0 ;
 for ( ; i<=10;i++)
 {
    printf("Hello Wordl!"); 
    // this will work
 }


 for ( ;  ; )
 {
    printf("Hello Wordl!"); 
    // infinite loop

 }


 for ( ;  ; i++)

 {
    // infinite loop
 }
 for ( ;  ; i++);

 {
    // terminated loop as there is a semicolon 
 }
 for ( ; 1 ; )

 {
    // infinite loop
 
 }
 
  

  for ( ; 0 ; )
  {
    // loop will never work as 0 is treated as false
  }
} 
