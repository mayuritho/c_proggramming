#include<stdio.h>
int main()
{
    int i,fact=1,n;
    printf("enter a number:");
    scanf("%d",&n);
    i=2;
    while(i<=n)
    {
        fact *=i;
        i++;
    }
    printf("factorial is %d",fact);
    return 0;
}