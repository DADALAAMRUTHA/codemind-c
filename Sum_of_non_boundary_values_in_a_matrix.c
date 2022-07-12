#include<stdio.h>
int main()
{
    int n,m,a[100][100],sum=0,s=0;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {  
        if(i==0||i==n-1)
        {
        for(int j=0;j<m;j++)
        {
          sum=sum+a[i][j];  
        }
        }
        else
        for(int j=0;j<m;j++)
        {
            if(j==0||j==m-1)
            {
                sum=sum+a[i][j];
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            s=s+a[i][j];
        }
    }
    printf("%d",s-sum);
}