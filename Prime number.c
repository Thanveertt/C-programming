#include<stdio.h>
int main() 
{

  int n,i,flag=0;
  printf("Enter a positive integer:");
  scanf("%d",&n);
  for(i=2;i<n;i++) 
  {
    if(n%i==0) 
    {
      flag=1;
      break;
    }
  }
  if(n==1)
  {
    printf("enter a number greater than one.");
  }
  else if(flag==0)
  {
    printf("%d is a prime number.", n);
  }
  else
  {
    printf("%d is not a prime number.", n);
  }
}
