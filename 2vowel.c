#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter a Alphabet:");
    scanf("%c",&ch);
    ch = tolower(ch);
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'u':
        case 'i':
        case 'o':
        printf("Vowel");
        break;
        default:
        printf("NOT VOWEL !!");

    }
}