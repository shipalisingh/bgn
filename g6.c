#include<stdio.h>
void main()
{
	int n;
	printf("entre year");
	scanf("%d",&n);
	if(n%4==0|| (n%400==0 && n%100!=0))
	printf("Leap Year");
	else
	printf("Not A Leap Year");
}
