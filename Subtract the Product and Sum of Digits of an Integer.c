#include<stdio.h>
int main()
{
    int i=1,r,sum=0,n,p=1;
    scanf("%d",&n);
    while(i<=n)
    {
        r=n%10;
        p=p*r;
        sum=sum+r;
        n=n/10;
    }
    if(sum>=p)
    {
        printf("%d",sum-p);
    }
    else
    {
        printf("%d",p-sum);
    }
    return 0;
}