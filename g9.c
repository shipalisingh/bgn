#include<stdio.h>
void main()
{
	int n,k,i,a[100],sum=0;
	printf("enter number");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter ith no");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		sum+=a[i];
	}
	printf("%d",sum);
}
