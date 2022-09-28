#include <stdio.h>
void printArray(int arr[], int size)
{
    for (int i = 0 ; i < size ; i ++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int InsertionSort(int arr[],int size)
{
    int count  = 0 ;
   for (int i = 1 ; i < size ; i++)
   {
    int key = arr[i] ; 
    int j = i-1 ; 
    while (j>=0 && arr[j] > key )
    {
        arr[j+1] = arr[j];
        j-- ; 
        count++ ; 
        
    }
      if (arr[j+1]!=key){
      arr[j+1] = key ; 
        count++ ; 
      }

   }
   return count  ; 
}
int main(){

    int t  ; 
    scanf("%d",&t);
    while (t--)
    {
    
int size ; 
    scanf("%d",&size);
    int arr[size];
    for (int i = 0 ; i<size ; i++)
    {
        scanf("%d",&arr[i]);
    }

   printf("%d\n",InsertionSort(arr,size));
    // printArray(arr,size);
        /* code */
    }
}