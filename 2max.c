#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    printf("enter 2 number");
    scanf("%d%d",&a,&b);
    printf("max is %.2f",fmax(a,b));
     printf("min is %.0f",fmin(a,b));
    return 0;
}