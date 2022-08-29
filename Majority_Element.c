#include<stdio.h>
int main()
{
    int n,max=0,c=0,b,a[1010],i,j;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    { c=0;
        for(int j=0;j<n;j++)
        {
            if(a[j]==a[i])
            {
                c+=1;
            }
        }
        if(c>max)
        {
            max=c;
            b=a[i];
            a[i]=0;
        }
    }
    printf("%d",b);
}