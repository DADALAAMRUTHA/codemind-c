#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        char s[100];
        int j,k,c=0,d;
        scanf("%d",&d);
        scanf("%s",s);
        for(j=0;s[j]!=NULL;j++)
        {
            c=0;
            for(k=0;s[k]!=NULL;k++)
            {
                if(s[j]==s[k] && j!=k)
                {
                    c=1;
                    break;
                }
            }
            if(c==0)
            {
                printf("%c
",s[j]);
                break;
            }
        }
        if(c==1)
        {
            printf("-1
");
        }
    }
}