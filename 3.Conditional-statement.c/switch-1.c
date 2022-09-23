#include <stdio.h>
int main(){
    int day ; 
    printf("Enter day between 1 to 7 : ");
    scanf("%d",&day);
   

   switch (day)
   {
   case 1:
    /* code */
    printf("Monday\n");
    break;
   
   case 2:
    /* code */
    printf("Tuesday\n");
    break;
   
   case 3:
    /* code */
    printf("Wednesday\n");
    break;
   case 4:
    /* code */
    printf("Thursday\n");
    break;
   case 5:
    /* code */
    printf("Friday\n");
    break;
   case 6:
    /* code */
    printf("Saturday\n");
    break;
   case 7:
    /* code */
    printf("Sunday\n");
    break;
   
   default:
   printf("Invalid Argument\n");
    break;
   }
    return 0 ; 
}