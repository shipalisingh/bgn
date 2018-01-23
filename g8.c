#include<stdio.h>
void main()
{
 int sum=0,n,i;
 printf("input no");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 	sum+=i;
 }
 printf("%d",sum);
}
