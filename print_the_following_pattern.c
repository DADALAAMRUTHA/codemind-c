#include<stdio.h>
int main()
{
    int a,i,j,k;
    scanf("%d",&a);
    for(i=a;i>=1;i--)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=a;k++)
        {
            if(k==1||k==a||i==1||i==a)
            printf("*");
            else
            printf(" ");
        }
        printf("
");
    }
}