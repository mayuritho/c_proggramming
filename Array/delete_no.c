//Delete all matching number element


#include<stdio.h>
int main()
{
    int i,j,n,key,a[100];
    printf("enter a number");
    scanf("%d",&n);

    for(i =0;i<n;i++)
    scanf("%d",&a[i]);

    printf("enter a number for dalete:");
    scanf("%d",&key);

    for(i=0;i<n; i++)
    {
        if(key==a[i])
        {
            for(j=i;j<n-1;j++)
            a[j]=a[j+1];
        n--;
        i--;
        }
    }
    printf("After deletion of number:\n");
    for(i =0;i<n;i++)
    printf("%d\n",a[i]);
return 0;
}