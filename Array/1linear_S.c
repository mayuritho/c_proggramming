#include<stdio.h>
int main()
{
    int a[100],i,n,key,cnt=0;
    printf("enter a number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("enter number for occurance");
    scanf("%d",&key);
    for(i=0;i<n;i++)
     {
        if(key==a[i])
        cnt++;

     }
     if(cnt==0)
     printf("Not found");
    else
    printf("count is %d",cnt);
return 0;
}