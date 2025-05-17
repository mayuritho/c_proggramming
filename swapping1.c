#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter 2 number");
	scanf("%d%d",&a,&b);
	printf("before swapping \nA=%d \nB=%d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\nafter swapping \nA=%d \nB=%d",a,b);
	return 0;
}
