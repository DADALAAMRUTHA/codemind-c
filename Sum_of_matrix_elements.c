#include<stdio.h>
int main()
{
    int a[100][100],i,j,sum=0,m,n;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            sum=sum+a[i][j];
        }
    }
    printf("%d",sum);
}