#include<stdio.h>
int main()
{
    int a,b ,ch;
    printf("\n1. Addition ");
    printf("\n2. substraction");
    printf("\n3. multiplication");
    printf("\n4.division");
    printf("\nenter a choice: ");
    scanf("%d",&ch);
    printf("\n enter 2 number");
    scanf("%d%d",&a,&b);
     
    switch(ch)
    {
        case 1:
        printf("addition is %d",a+b);
        break;
        case 2:
        printf("substraction is %d",a-b);
        break;
        case 3:
        printf("multiplication is %d",a*b);
        break;
        case 4:
        printf("division is %d",a%b);
        break;
        default:
        printf(" invalid choice");
    }
    return 0;

}
