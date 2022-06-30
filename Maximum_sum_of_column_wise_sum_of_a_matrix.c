#include<stdio.h>
int main()
{
    int i,j,m,n,max=0;
    int matrix[100][200];
    int sumR,sumC;
    scanf("%d",&m);
    scanf("%d",&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        int sumC=0;
        for(j=0;j<m;j++)
        {
            sumC+=matrix[j][i];
        }
        if(sumC>max)
        {
            max=sumC;
        }
    }
    printf("%d",max);
    return 0;
}