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
    for(i=0;i<n;i++)
    {int k=0;
        for(j=0;j<m-1;j++)
        {
            if(a[i][j]<a[i][j+1])
            k++;
        }
        if(k==m-1)
        c++;
    }
    for(i=0;i<n;i++)
    {int k=0;
        for(j=0;j<m-1;j++)
        {
            if(a[i][j]>a[i][j+1])
            k++;
        }
        if(k==m-1)
        c++;
    }
    printf("%d",c);
}