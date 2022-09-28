   
int size ; 
    scanf("%d",&size);
    int arr[size];
    for (int i = 0 ; i<size ; i++)
    {
        scanf("%d",&arr[i]);
    }

   printf("%d\n",InsertionSort(arr,size));
    // printArray(arr,size);