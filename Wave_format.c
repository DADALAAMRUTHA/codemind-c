#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int array[n],a[n];
    int temp;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    //step 1
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++) 
        { if(array[i]>array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    int j=0;
    for(int i=n-1;i>=0;i--)
    {
        a[j]=array[i];
        j++;
        
    }
    for(int i=0; i<n; i=i+2)
    {
        temp = a[i];
        a[i] = a[i+1];
        a[i+1] = temp;
    }  
    if(n%2==0)
    {
        for(int i=0; i<n; i++)
        {
        printf("%d ",a[i]);
        }
    }
    else
    {
        for(int i=0; i<n-1; i++)
    {
        printf("%d ",a[i]);
    }
    printf("%d",a[n]);
    }
    return 0;
}