#include<stdio.h>
int main()
{
    int n,arr[100],i,max=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]+k>=max)
        printf("True ");
        else
        printf("False ");
    }
    return 0;
}