#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=0;i<=a;i++)
    {
        if(a==i*i)
        {
            printf("True");
            return 0;
        }
    }
    printf("False");
    return 0;
}