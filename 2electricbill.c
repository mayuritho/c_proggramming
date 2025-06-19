#include<stdio.h>
int main()
{
    int unit;
    float amt=100;
    printf("enter a unit:");
    scanf("%d",&unit);

    if(unit>=100)
    {
        amt+=100*8;
        unit-=100;
        
        if(unit>=100)
        {
            amt+=100*10;
            unit-=100;

            if(unit>=100)
            {
                amt+=100*12;
                unit-=100;
            }
            else
             amt+=unit*12;
        }
        else
          amt+=unit*10;
    }
    else
    {
        amt+=unit*8;
        printf("amt is: %2.f",&amt);
    }
    return 0;


}