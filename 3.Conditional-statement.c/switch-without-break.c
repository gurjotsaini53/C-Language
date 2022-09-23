#include <stdio.h>
int main(){
    int day ; 
    printf("Enter day between 1 to 7 : ");
    scanf("%d",&day);
   
//   if not used break it will print all bellow cases where condition gets true 
   switch (day)
   {
   case 1:
    /* code */
    printf("Monday\n");
    
   
   case 2:
    /* code */
    printf("Tuesday\n");
 
   
   case 3:
    /* code */
    printf("Wednesday\n");
    
   case 4:
    /* code */
    printf("Thursday\n");
    
   case 5:
    /* code */
    printf("Friday\n");
    
   case 6:
    /* code */
    printf("Saturday\n");

   case 7:
    /* code */
    printf("Sunday\n");
 
   
   default:
   printf("Invalid Argument\n");
    
   }
    return 0 ; 
}