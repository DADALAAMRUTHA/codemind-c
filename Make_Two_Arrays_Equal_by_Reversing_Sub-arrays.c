#include<stdio.h>
int main()
{
    int n,m,a[100],b[100],c=0,temp;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++) 
        { if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
     for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++) 
        { if(b[i]>b[j])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==b[i])
        c++;
    }
    if(c==n)
    printf("True");
    else
    printf("False");
}