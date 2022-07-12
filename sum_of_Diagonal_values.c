#include<stdio.h>
int main()
{
    int a[100][100],n,m,sum=0,sum1=0;
    scanf("%d%d",&n,&m);
    if(n%2!=0&&m%2!=0)
    {
        for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==j)
            sum=sum+a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        
            sum1=sum1+a[i][n-i-1];
        
    }
    printf("%d",sum+sum1-a[n/2][m/2]);
    }
    else
    {
        for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==j)
            sum=sum+a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        
            sum1=sum1+a[i][n-i-1];
        
    }
    printf("%d",sum+sum1);
    }
}