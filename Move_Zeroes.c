#include<stdio.h>
int main()
{
    int n,a[1000],i,j,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    { int f=0;
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]==0)
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                f++;
            }
        }
        if(f==0)
        break;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}