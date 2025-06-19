#include<stdio.h>
int main()
{
    int a[100],i,n,pos,key;
    printf("enter a number");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("enter position");
    scanf("%d",&pos);
    printf("enter key");
    scanf("%d",&key);

    for(i=n;i>=pos;i--)
    a[i]=a[i-1];
 a[pos-1]=key;
 n++;

    printf("After inset number\n");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
return 0;
}