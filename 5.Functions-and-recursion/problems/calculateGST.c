#include <stdio.h>
float calculateGST(float value)
{
    value +=  (0.18*value);
    return value; 
}
int main(){
 float value=100;  ;
 printf("value of product is : %f\n",value);
 printf("Final Price of product is : %f\n",calculateGST(value));
 float x ; 
 printf(" %f\n",x);

 return 0 ;

}