#include<stdio.h>
int main()
{
    int n,m,a[100][100],i,j,c=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<m;j++)
    {int k=0;
        for(i=0;i<n-1;i++)
        {
            if(a[i][j]<=a[i+1][j])
            k++;
        }
        if(k==n-1)
        c++;
    }
    for(j=0;j<m;j++)
    {int k=0;
        for(i=0;i<n-1;i++)
        {
            if(a[i][j]>=a[i+1][j])
            k++;
        }
        if(k==n-1)
        c++;
    }
    printf("%d",c);
}