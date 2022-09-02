#include<stdio.h>
int main()
{
    int n,m,a[100][100],max=0,s=0,s1=0;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {  
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]%2==0)
            s=s+a[i][j];
            else
            s1=s1+a[i][j];
        }
    }
    printf("%d %d",s,s1);
}