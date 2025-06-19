#include<stdio.h>
int main()
{
      char ch;
    printf("enter the Alphabet:");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'A'...'Z':
        printf("Capital Letter !");
        break;
        case 'a' ...'z':
        printf("Small letter !");
        break;
        case '0'...'9':
        printf("Digit !!");
        break;
        default:
        printf("specail Symbol !!");
        break;
    }
    return 0;
}