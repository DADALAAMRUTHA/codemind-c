#include<stdio.h>
int main()
{
    int n,temp=0,d,i,c=0,r=0,m;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        c=0;
        r=0;
        temp=i;
        while(temp)
        {
            d=temp%10;
            if(d!=0 && i%d==0)
            {
                
                
                c++;
            }
            r++;
            temp=temp/10;
        }
        if(c==r)
        {
            printf("%d ",i);
        }
    }
}