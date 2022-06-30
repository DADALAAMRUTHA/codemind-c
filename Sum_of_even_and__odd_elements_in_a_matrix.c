#include<stdio.h>
int main()
{
    int a[100][100],n,m,sum=0,sum1=0;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]%2==0)
            sum=sum+a[i][j];
            else
            sum1+=a[i][j];
        }
    }

printf("%d ",sum);
printf("%d",sum1);
}