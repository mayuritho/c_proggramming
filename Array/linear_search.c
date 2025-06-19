#include<stdio.h>
int main()
{
    int a[100],n,key,flag=1,i;

     printf("how many number you wants to enter");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("enter anumber for search");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    printf("not found");
else 
printf("Found");
return 0;
}