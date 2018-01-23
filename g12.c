#include<stdio.h>
void main()
{
	int n,i,temp,r;
	printf("enter a no");
	scanf("%d",&n);
	temp=n;
    while(n>0)
    {
    	r=10*r+n%10;
    	n=n/10;
}
if(temp==r)
	printf("Pallindrome");
	else
	{
		printf("Not A Palindrome");
	}
	}
