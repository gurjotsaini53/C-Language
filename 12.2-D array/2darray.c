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
int main(){
    int n , m  ; 
    printf("Enter rows : ");
    scanf("%d",&n); 
    printf("Enter columns : ");
    scanf("%d",&m); 
    int a[n][m]; 
    for (int i = 0 ; i < n ;i++)
    {
        for (int j = 0 ; j < m ; j++)
        {
            scanf("%d",&a[i][j]) ; 
        }
    }
   
      print2darray(n,m,a);
   

}