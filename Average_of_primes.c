#include<stdio.h>
int main()
{
    int n,a[100],i,j,c=0,f=0;
    float sum,avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        f=0;
        for(j=1;j<=a[i];j++)
        {
            
            if(a[i]%j==0)
            {
                f++;
            }
        }
        if(f==2)
        {
            sum=sum+a[i];
            c++;
        }
    }
    avg=sum/c;
    printf("%.2f",avg);
   
}