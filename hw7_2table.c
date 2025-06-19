#include<stdio.h>
int main()
{
    int i=2,j;
    for(i=1;i<=20;i+=2)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
          

    }
    
    return 0;
}