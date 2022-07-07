#include<stdio.h>
int main()
{
    int n,r,sum=0,k;
    scanf("%d",&n);
    k=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(sum==k)
    printf("True");
    else
    printf("False");
}