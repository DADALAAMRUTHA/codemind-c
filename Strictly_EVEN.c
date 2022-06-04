#include<stdio.h>
int main()
{
    int x[20],n,i;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d",&x[i]);
    
    for(i=0;i<n;i++)
    {
        if(x[i]%2==0)
        {
            if(i%2!=0)
            {
                printf("False");
                return 0;
            }
        }
    }
    printf("True");
    return 0;
}