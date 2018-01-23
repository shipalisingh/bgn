#include<stdio.h>
void main()
{
	int n,p,i,result;
	printf("enter a no");
	scanf("%d",&n);
	printf("enter the power");
	scanf("%d",&p);
	for(i=0;i<p;i++)
	{
		result=result*n;
	}
	printf("%d",result);
	}
