#include <stdio.h>

void printArray(int arr[], int size)
{
    for (int i = 0 ; i < size ; i ++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int selectionSort(int arr[],int size)
{
    int min ,count = 0;
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
         if(arr[i]>arr[min]){
        swap(&arr[i],&arr[min]);
        count ++ ;
         }
        
    }
    return count ;
}
void swap(int *a , int *b)
{
    int temp = *a ;
    *a = *b ; 
    *b = temp  ;
}

int main(){
  int t ; 
  scanf("%d" , &t);
  while (t--)
  {
    int size ; 
    scanf("%d",&size);
    int arr[size];
    for (int i = 0 ; i<size ; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d\n",selectionSort(arr,size));

  }
  
  
    
 
}