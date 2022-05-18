#include<stdio.h>
int main()
{
    int n,ar[20],sum=0,s=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            sum=sum+ar[i];
        }
        else
        s=s+ar[i];
    }
    if(s>sum)
    printf("%d",s-sum);
    else
    printf("%d",sum-s);
    
}