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

int bubbleSort(int arr[],int size)

{
   int count = 0 ;
    for (int i = 0 ; i< size-1 ; i++)
    {
        for (int j = 0;j<size-1-i;j++)
        {
            if (arr[j]>arr[j+1])
            {
               swap(&arr[j],&arr[j+1]);
               count ++ ;
            }
        }
    }
    return count;
}
int main(){
    int t ; 
    // enter test cases
    scanf("%d",&t);
    while(t--)
    {
    int size ; 
    scanf("%d",&size);
    int arr[size];
    for (int i = 0 ; i<size ; i++)
    {
        scanf("%d",&arr[i]);
    }
    // printArray(arr,size);
    printf("%d",bubbleSort(arr,size));
    }
}