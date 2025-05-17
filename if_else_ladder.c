#include<stdio.h>
int main()
{
    int a,b ,c;
    printf("enter 3 number");
    scanf("%d%d%d",&a,&b,&c);
    if(c>=a && c>=b)
    printf("max no is %d",c);
else if(a>=b&& a>=c)
    printf("max no is %d",a);
    else
     printf("max no is %d",b);
    return 0;

}