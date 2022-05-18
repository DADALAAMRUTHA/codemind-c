#include<stdio.h>
int fib(int);
int main()
{
	int n,i,res;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		res=fib(i);
		printf("%d ",res);
	}
	return 0;
}
int fib(int x)
{
	if(x==1)
	return 0;
	else if(x==2)
	return 1;
	else
	return fib(x-1)+fib(x-2);  
	
}