#include <stdio.h>

void swap(int *a,int *b)
{
    int t= *a ;
    *a = * b ; 
    *b = t ; 
}

int partition(int arr[],int p , int r)
{
    int x = arr[r];
    int i = p-1;
    for(int j = p ; j<=r-1;j++)
    {
        if (arr[j]<=x)
        {
            i = i+1;
           swap(&arr[i],&arr[j]);
        }
           swap(&arr[i+1],&arr[r]);

    }
    return i+1;
}

void Quicksort(int arr[], int p , int r)
{
    if (p<r)
    {
        int q = partition(arr,p,r);
        Quicksort(arr,p,q-1);
        Quicksort(arr,q+1,r);
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){

    
    int t;
    scanf("%d", &t);
    while (t--)
    {

        int size;
        scanf("%d", &size);
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &arr[i]);
        }

       // printArray(arr,size);
        Quicksort(arr,0,size-1);
        printArray(arr,size);
         
}
}