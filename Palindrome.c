#include<stdio.h>
int main()
{
    int n,r,sum=0,l;
    scanf("%d",&n);
      l=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n/=10;
    }
    if(sum==l)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}