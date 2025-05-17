#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter 3 number");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    b=c;
   if(c>b)
   b=c;
 printf("max no is %d",b);
 return 0;

}