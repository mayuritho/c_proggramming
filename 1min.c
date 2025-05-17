#include<stdio.h>
int main()
{
    int a,b;
    printf("enter 2 number");
    scanf("%d%d",&a,&b);
    (a<b)? printf("min is %d",a):printf("min is %d",b);
    return 0;
}