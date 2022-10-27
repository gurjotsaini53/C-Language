#include <stdio.h>

void print2darray(int n , int m , int a[n][m]  )
{
     // printing array
    for (int i = 0 ; i < n ;i++)
    {
        for (int j = 0 ; j < m ; j++)
        {
            printf("%d ",a[i][j]) ; 
        }
        printf("\n") ; 
    }
}
void sumof2darray(int n , int m , int a[n][m] , int b[n][m] , int newarray[n][m]  )
{
     // printing array
    for (int i = 0 ; i < n ;i++)
    {
        for (int j = 0 ; j < m ; j++)
        {
             newarray[i][j] = a[i][j] + b[i][j] ; 
        }
       
}
}
int main(){
    int n , m  ; 
    
    printf("Enter rows : ");
    scanf("%d",&n); 
    printf("Enter columns : ");
    scanf("%d",&m); 
    int a[n][m]; 
    int b[n][m]; 
    for (int i = 0 ; i < n ;i++)
    {
        for (int j = 0 ; j < m ; j++)
        {
            scanf("%d",&a[i][j]) ; 
        }
    }
   
    for (int i = 0 ; i < n ;i++)
    {
        for (int j = 0 ; j < m ; j++)
        {
            scanf("%d",&b[i][j]) ; 
        }
    }
  // creating new array that will contain sum of two array 

    int newarray[n][m]  ;
 // sum of two array 
  sumof2darray(n,m,a,b,newarray);
   // print array 
   print2darray(n,m,newarray);
   

   return 0 ; 

}