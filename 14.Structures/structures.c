#include <stdio.h>
#include <string.h>
struct hero{
    int health ;
    char  name[20] ; 
    char level;
} swami; 

// created instance of structure after class decalaring 
int main(){
   swami.health  = 100 ; 
   swami.level  = 'A';
   
   strcpy(swami.name,"Manish Swami");

   printf("value of hero \n");
   printf(" Name = %s\n",swami.name);
   printf("Health = %d\n",swami.health);
   printf("level = %c\n",swami.level);
 
// creating in main
  struct  hero guri  = {.health = 100 , .level = 'A'} ;
strcpy(guri.name ,"Gurjot SIngh");
    printf("value of hero \n");
   printf(" Name = %s\n",guri.name);
   printf("Health = %d\n",guri.health);
   printf("level = %c\n",guri.level);
}