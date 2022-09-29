#include <stdio.h>
void printArray(int arr[],int size)
{
    for (int i = 0 ; i  < size ;i++)
    printf("%d ",*(arr+i));

    printf("\n");

}
int main(){
    // array is pointer 
    int arr1[]={ 0,1,3,4,10};
    // printing address
    printf("%p\n",arr1);
    printf("%p\n",arr1+1);
    printf("%p\n",arr1+2);
    printf("%p\n",arr1+3);
    printf("%p\n",arr1+4);

    printArray(arr1,5);


    // printing values
     printf("%d\n",*(arr1));
    printf("%d\n",*(arr1+1));
    printf("%d\n",*(arr1+2));
    printf("%d\n",*(arr1+3));
    printf("%d\n",*(arr1+4));


   return 0 ;
}