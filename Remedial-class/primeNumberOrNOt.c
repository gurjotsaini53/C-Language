#include <stdio.h>
int main(){
int n; 
printf("Enter N : ");
scanf("%d",&n);

  int flag  = 0 ;
for (int i = 2 ; i<=n/2 ; i++)
{
   if (n%i==0)
   {
      printf("%d is not a prime number \n",n);
      flag = 1; 
      break;
   }
}

if(flag==0)
{
      printf("%d is  a prime number \n",n);

}
}