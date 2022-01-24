#include<stdio.h>
int main()
{
    int n,i,j,c1=0,c2=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c2=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                c2++;
            }
            if(c2!=2)
            c1++;
        }
    }
    printf("%d",c1);
}