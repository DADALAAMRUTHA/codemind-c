#include<stdio.h>    
int main()    
{    
 int n1=0,n2=1,n3,i,number;    
 scanf("%d",&number);    
 for(i=2;i<number;++i)
 {    
  n3=n1+n2;    
  if(n3==number)
  {
  printf("True");
  break;
  }
  else if(n3>number)
  {
      printf("False");
      break;
  }
  n1=n2;    
  n2=n3;    
 }  
  return 0;  
 } 