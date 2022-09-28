#include <stdio.h>
void printHW(int count)
{
    if (count==0){
        return  ;
    }
    printf("Hello Wordl!\n");
    printHW(count-1);
}
int main(){
  printHW(10);
}