#include<stdio.h>
int main()
{
    int fact,i,j,n1,n2;
    scanf("%d%d",&n1,&n2);
    for(i=n1;i<=n2;i++)
    {
        fact=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                fact++;
            }
        }
        if(fact==2)
        {
            printf("%d
",i);
        }
    }
    return 0;
}