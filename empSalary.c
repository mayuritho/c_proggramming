#include<stdio.h>
int main()
{
	int eid;
	char ename[100];
	float bs,tax,hra,da,totalsalary;
	printf("enter a employee details");
	printf("ID:");
	scanf("%d",&eid);
	printf("Name:");
	scanf("%s",ename);
	printf("Basic Salary");
	scanf("%f",&bs);
	printf("DA(%):");
	scanf("%f",&da);
	printf("Tax(%):");
	scanf("%f",&tax);
	printf("HRA(%):");
	scanf("%f",&hra);
	totalsalary=bs+(bs*(da+hra-tax)/100);
	printf("totalsalary:%f",totalsalary);
	return 0;
	
	}
