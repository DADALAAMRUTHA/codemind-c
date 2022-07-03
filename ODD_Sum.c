#include<stdio.h>
int main()
{
    int n,ar[20],sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(ar[i]%2!=0)
        {
            sum=sum+ar[i];
        }
    }
    printf("%d",sum);
}