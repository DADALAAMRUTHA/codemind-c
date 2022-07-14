#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int arr[100],i,k,j=0;
    int c=0,r;
    while(a>0)
    {
        r=a%b;
        arr[j]=r;
        j++;
        a/=b;
    }
    int max=0;
    for(i=0;i<j;i++)
    {
        c=0;
        for(k=i;k<j;k++)
        {
            if(arr[k]==0)
            {
                c++;
                if(max<c)
                {
                    max=c;
                }
            }
            else
            {
                break;
            }
        }
    }
    if(max==0)
    {
        printf("%d",-1);
    }
    else
    {
        printf("%d",max);
    }
}