//make unique Array

#include<stdio.h>
int main()
{
    int i,j,n,k,a[100];
    printf("enter a number");
    scanf("%d",&n);

    for(i=0;i<n;i++)    //accept
    scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<n-1;k++)
                a[k]=a[k+1];
            n--;
            j--;
            }
        }
    }
    printf("After a unique number\n");
    for(i=0;i<n;i++)                        //Display
    printf("%d\n",a[i]);
return 0;
}