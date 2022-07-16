#include<stdio.h>
int main()
{
    int n,m,a[100][100],b[100][100],c[100][100],j,s=0,s1=0,s2=0;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {  
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
   
    for(int j=0;j<m;j++)
    {  s=0;
        for(int i=0;i<n;i++)
        {
            s=s+a[i][j];
        }
        if(s>s1)
        s1=s;
    }
    for(int i=0;i<n;i++)
    {  s=0;
        for(int j=0;j<m;j++)
        {
            s=s+a[i][j];
        }
        if(s>s2)
        s2=s;
    }
    if(s1>s2)
    printf("%d",s1);
    else
    printf("%d",s2);
}