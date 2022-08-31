#include<stdio.h>
int main()
{
    int n,m,a[100][100],b[100][100],c[100][100],j;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {  
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
   
    for(int j=0;j<m;j++)
    {  int s=0;
        for(int i=0;i<n;i++)
        {
            s=s+a[i][j];
        }
        printf("%d ",s);
    }
}