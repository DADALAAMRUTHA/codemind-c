#include<stdio.h>
int main()
{
    int n,sum=0,p;
    scanf("%d",&n);
    while(n!=0)
    {
        p=n%10;
        if(p>sum)
        {
            sum=p;
        }
        n=n/10;
    }
    printf("%d",sum);
}