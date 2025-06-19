#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("enter a character");
    scanf("%c",&ch);
    if(isupper(ch))
    printf("Capital letter");
else if(islower (ch))
printf("small letter");
else if(isdigit(ch))
  printf("Digit");
else
    printf("special symbol");
return 0;
}