#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a 2number:");
    scanf("%d%d",&a,&b);
    printf("min is %d",(a<b)?a:b);
    return 0;
}