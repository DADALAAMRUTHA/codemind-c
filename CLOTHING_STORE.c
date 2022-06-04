#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n,i,j,count,res;
    scanf("%d",&n);
    int siz[n];
    for(i=0;i<n;i++)
    scanf("%d",&siz[i]);
    res=0;
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=i+1;j<n;j++)
        {
            if(siz[i]==siz[j])
            count++;
        }
        res+=count%2;
    }
    printf("%d",res);
    return 0;
}