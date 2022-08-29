#include<stdio.h>
int main()
{
	int m,n,a[100],j;
	scanf("%d%d",&m,&n);
	for(int j=0;j<m;j++)
	{
		scanf("%d",&a[j]);
	}
	for(int i=0;i<n;i++)
	{ int p=a[0];
		for(j=0;j<m;j++)
		{
		  a[j]=a[j+1];	
		}
		a[m-1]=p;
		
	}
	for(int j=0;j<m-1;j++)
	{
		printf("%d ",a[j]);
	}
    printf("%d",a[m-1]);

}