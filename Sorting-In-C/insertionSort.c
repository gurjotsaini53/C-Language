#include <stdio.h>
void printArray(int arr[], int size)
{
    for (int i = 0 ; i < size ; i ++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void InsertionSort(int arr[],int size)
{
   for (int i = 1 ; i < size ; i++)
   {
    int key = arr[i] ; 
    int j = i-1 ; 
    while (j>=0 && arr[j] > key )
    {
        arr[j+1] = arr[j];
        j-- ; 
        
    }
      arr[j+1] = key ; 
   }
}
int main(){
int size ; 
    scanf("%d",&size);
    int arr[size];
    for (int i = 0 ; i<size ; i++)
    {
        scanf("%d",&arr[i]);
    }

   InsertionSort(arr,size);
    printArray(arr,size);
}