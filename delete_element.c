#include<stdio.h>
int main()
{
    int a[100],n,i,j,key;
    printf("how many number you want to enter");
    scanf("%d",&n);
    for(i = 0;i<n;i++)
    scanf("%d",&a[i]);
printf("enter a number for delete");
scanf("%d",&key);

for(i=0;i<n;i++)
{
    if(a[i]==key)
    {
        for(j=i;j<n-1;j++)
        a[j]=a[j+1];
    n--;
    break;
    }
}
for(i=0;i<n;i++)
printf("%d\n",a[i]);
return 0;
}