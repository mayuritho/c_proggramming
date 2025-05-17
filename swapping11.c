#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter 2 number");
	scanf("%d%d",&a,&b);
	printf("before swapping\n A=%d \nB=%d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\n After swapping\n A=%d \nB=%d ",a,b);
	return 0;
	
} 
