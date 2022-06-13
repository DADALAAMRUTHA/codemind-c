#include<stdio.h>
int main()
{
    int n,a[100],k=0;
    float sum=0,avg;
    scanf("%d",&n);
    for(int i=00;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {int c=0;
         for(int j=0;j<n;j++)
         {
             if(a[i]==a[j])
             {
                 c++;
             }
         }
         if(c==a[i])
         {
             sum=sum+a[i];
             a[i]=0;
             k++;
         }
        
    }
    if(k==0)
    printf("-1");
    else
    {
        avg=float(sum)/k;
        printf("%.2f",avg);
    }
}