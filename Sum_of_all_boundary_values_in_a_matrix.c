#include<stdio.h>
int main()
{
    int n,m,a[100][100],sum=0;
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
        for(int j=0;j<n;j++)
        {
            if(j==0||j==n-1)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("%d",sum);
}