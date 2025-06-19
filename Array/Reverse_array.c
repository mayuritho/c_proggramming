#include<stdio.h>
int main()
{
    int a[100], n,i;
    printf("Enter a number");
    scanf("%d",&n);

    for(i=0;i<n;i++)         //Accept
     scanf("%d",&a[i]);

    for(i=0;i<n/2;i++)
    {
        int temp =a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
    printf("Reverse number\n");      //Display
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
return 0;
}