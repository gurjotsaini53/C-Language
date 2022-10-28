#include <stdio.h>

void print2darray( int r ,int c, int arr[r][c])
{
    
    for (int i= 0 ; i  < r ; i++)
    {
      for (int j = 0 ; j < c ; j++)
      {
         printf("%d ",arr[i][j]);
      }
      printf("\n");
    }
}


void matrix_multiplication(int r1 , int r2 , int c1 , int c2 , int arr1[r1][c1] , int arr2[r2][c2] , int res[r1][c2])
{
   for (int i = 0 ; i < r1 ; i++)
   {
    for (int j = 0; j < c2 ; j++ )
    {
        for (int k = 0 ; k < c1 ; k++)
        {
            res[i][j] += arr1[i][k] * arr2[k][j];
        }
    }
   }
}
int main(){
    int r1, r2 , c1 ,  c2 ; 

    // printf(" Enter no. of rows of first matrix  :") ;
    scanf("%d",&r1);
    // printf(" Enter no. of columns of first matrix  :") ;
    scanf("%d",&c1);

    int arr1[r1][c1]  ;

    for (int i= 0 ; i  < r1 ; i++)
    {
      for (int j = 0 ; j < c1 ; j++)
      {
         scanf("%d",&arr1[i][j]);
      }
    }
    // printf(" Enter no. of rows of second matrix  :") ;
    scanf("%d",&r2);
    // printf(" Enter no. of columns of second matrix  :") ;
    scanf("%d",&c2);

    int arr2[r2][c2]  ;

    for (int i= 0 ; i  < r2 ; i++)
    {
      for (int j = 0 ; j < c2 ; j++)
      {
         scanf("%d",&arr2[i][j]);
      }
    }

 // print2darray(r1,c1,A);
  // print2darray(r2,c2,arr2);

  int res[r1][c2]  ; 
  for (int i = 0 ;  i < r1 ; i++)
  {
    for (int j = 0  ; j < c2 ; j ++)
    {
        res[i][j] = 0 ; 
    }
  }
  matrix_multiplication(r1,r2,c1,c2,arr1,arr2,res);
  print2darray(r1,c2,res); 
  return 0;
}