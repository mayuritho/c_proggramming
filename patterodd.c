#include<stdio.h>
int main()
{
    int i,j,n;
    int odd =1;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++,odd+=2)
        printf("%d\t",odd);
    printf("\n");
    }
}