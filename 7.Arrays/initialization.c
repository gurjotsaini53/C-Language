#include <stdio.h>
void printArray(int arr[],int size)
{
    for (int i = 0 ; i  < size ;i++)
    printf("%d ",arr[i]);

    printf("\n");

}
int main(){
   
    int arr1[]={ 0,1,3,4,10};
    printArray(arr1,5);
    int arr2[3]={1,2,3};
    printArray(arr2,3);
   return 0 ;
}