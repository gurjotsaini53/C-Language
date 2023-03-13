#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;
int main()
{
  
  float n1,n2;
  double result ; 
  char ch ; 
  cin>>n1>>ch>>n2;
  switch(ch){
    case '+':
      result=n1+n2;
      break;
    case '-':
      result=n1-n2;
      break;
    case '/':
      result = n1/n2;
      break;
    case '*':
      result=n1*n2;
      break;
  }
  cout<<result;
   return 0;}