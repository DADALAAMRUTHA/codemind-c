#include<stdio.h>
int main()
{
    int n,a[100],min=999,max=0,c=0,tem,mi,ma;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
        max=a[i];
        ma=i;
        }
        if(a[i]<min)
        {
        min=a[i];
        mi=i;
        }
    }
    if(ma>mi)
    {
    for(int i=0;i<n;i++)
    {
        if(i>=mi&&i<=ma)
        { int f=0;
            for(int j=1;j<=a[i];j++)
            {
                if(a[i]%j==0)
                {
                    f++;
                }
            }
            if(f==2)
            c++;
        }
    }
    printf("%d",c);
    }
    else
     {
    for(int i=0;i<n;i++)
    {
        if(i<=mi&&i>=ma)
        { int f=0;
            for(int j=1;j<=a[i];j++)
            {
                if(a[i]%j==0)
                {
                    f++;
                }
            }
            if(f==2)
            c++;
        }
    }
    printf("%d",c);
    }
    
}