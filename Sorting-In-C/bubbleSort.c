#include <stdio.h>

void printArray(int arr[], int size)
{
    for (int i = 0 ; i < size ; i ++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}


void swap(int *a , int *b)
{
    int temp = *a ;
    *a = *b ; 
    *b = temp  ;
}

void bubbleSort(int arr[],int size)

{
   
    for (int i = 0 ; i< size-1 ; i++)
    {
        for (int j = 0;j<size-1-i;j++)
        {
            if (arr[j]>arr[j+1])
            {
               swap(&arr[j],&arr[j+1]);
               
            }
        }
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
    // printArray(arr,size);
bubbleSort(arr,size);
    printArray(arr,size);
}