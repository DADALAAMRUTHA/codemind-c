#include<stdio.h>
int main()
{
    int n,i=0;
    scanf("%d",&n);
    if(n>=1&&n<=10000)
    {
    begin:
    i=i+1;
    printf("%d ",i);
    if(i<n)
    goto begin;
    }
    else
    {
        printf("The Number Series is Not Possible Print");
    }
    return 0;
}