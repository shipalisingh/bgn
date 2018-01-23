#include<stdio.h>
void main()
{
	int n,count=0;
	printf("enter a no");
	scanf("%d",&n);
	while(n>0)
	{
		n=n/10;
		count++;
	}
	printf("%d",count);
}
