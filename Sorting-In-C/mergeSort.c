#include <stdio.h>
void merge() ; 
void mainMergeSort() ; 
void merge();
void printArray(int arr[],int size){
    for (int i = 0 ;  i < size ; i++)
    printf("%d ",arr[i]) ; 
}

void mergeSort(int arr[],int temp[],int left , int right)
{
    if (left < right)
    {
        int mid  = (left + right ) / 2 ; 
        mergeSort(arr,temp,left,mid-1) ; 
        mergeSort(arr,temp,mid+1,right) ; 
        merge(arr,temp,left,right) ; 
    }
}

void merge(int arr[],int temp[],int left , int right)
{
    int mid ,i, j , k , l  , target  ;
    mid = (left+right)/2;
    i = left , j = mid + 1 , target = left  ;
    
    while (i<=mid && j<=right)
    {
        if (arr[i]<=arr[j])
        { temp[target] = arr[i] ;
       i++; 
        }
        else{
            temp[target] = arr[j] ; 
        j++;
        }
        target++ ; 
    }
    if (i>mid)
    {
        for (int k = left ; k <= target-1 ;k ++)
        {
            arr[k]= temp[k];
        }
    }
    if (j>right)
    {
        k = mid ; l = right  ;
        while (k>=i)
        {
            arr[l] = arr[k];
            k-- ; l--;
        }
        for (k  =left ; k<=target-1; k++)
        {
            arr[k] = temp[k];
        }
        
    }
    
}

void mainMergeSort(int arr[],int size)  
{
    int temp[size] ; 
    mergeSort(arr,temp,0,size-1);
}


int main(){
    int size ; 
    scanf("%d",&size) ; 
    int arr[size] ; 

    for (int i = 0 ; i  < size ; i++)
    {
        scanf("%d",&arr[i]);
    }

    mainMergeSort(arr,size) ; 
    printArray(arr,size);
}