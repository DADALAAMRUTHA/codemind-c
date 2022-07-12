#include<stdio.h>
int main()
{
    int n,t,a[1000],temp,j,i;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    scanf("%d",&t);
    for(int q=0;q<t;q++)
    { temp=a[n-1];
        for(int i=n-1;i>0;i--)
        {
             
            a[i]=a[i-1];
        }
        a[0]=temp;
    }
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
}