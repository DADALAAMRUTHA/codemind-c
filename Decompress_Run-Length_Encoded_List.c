#include<stdio.h>
int main()
{
    int n,a[100],i,j;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int f[n/2],v[n/2],u=0,s=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
        f[u]=a[i];
        u++;
        }
        else
        {
        v[s]=a[i];
        s++;
        }
    }
    int tot=0;
    for(i=0;i<n/2;i++)
    {
        tot=tot+f[i];
    }
    int fi[tot],h=0;
    
    for(int i=0;i<n/2;i++)
    {
        for(j=0;j<f[i];j++)
        {
            fi[h]=v[i];
            h++;
        }
    }
    for(int i=0;i<tot;i++)
    {
        printf("%d ",fi[i]);
    }
}