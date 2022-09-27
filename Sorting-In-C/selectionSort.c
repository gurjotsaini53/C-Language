#include <stdio.h>

void printArray(int arr[], int size)
{
    for (int i = 0 ; i < size ; i ++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void selectionSort(int arr[],int size)
{
    int min ;
    for (int i = 0 ; i <size; i++)
    {
        min = i ; 
        for (int j = i+1 ; j < size ; j++)
        {
            if (arr[j]<arr[min])
            {
                min = j ;
            }
        }
        if (arr[i]>arr[min]){
        swap(&arr[i],&arr[min]);
        }
    }
}
void swap(int *a , int *b)
{
    int temp = *a ;
    *a = *b ; 
    *b = temp  ;
}

int main(){

    int size ; 
    scanf("%d",&size);
    int arr[size];
    for (int i = 0 ; i<size ; i++)
    {
        scanf("%d",&arr[i]);
    }
    selectionSort(arr,size);
     printArray(arr,size);
    
 
}