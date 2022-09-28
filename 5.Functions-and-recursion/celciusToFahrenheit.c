#include <stdio.h>

float convertTemp(float celsius)
{
 float far = celsius * (9.0/5.0) + 32; 
 return far ;
}

int main(){
   float far = convertTemp(32);
   printf("farhrenheit is : %f", far);
  return 0 ; 
  }


