#include<stdio.h>
int main()
{
    float unit,amt=100;
    printf("enter a units:");
    scanf("%f",&unit);

    if(unit<=0)
    {
        printf("INVALID UNITS!!");
        return 0;
    }
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
        
        if(unit>=100)
        {
            amt+=100*15;
            unit-=100;
        
        if(unit>=100)
        {
            amt+=100*17;
            unit-=100;
        }
          else
            amt+=unit*17;
    }
     else
            amt+=unit*15;
    }
     else
            amt+=unit*12;
    }
     else
            amt+=unit*10;
    }
     else
            amt+=unit*8;
        printf("Amt is:%.2f",amt);
        return 0;
    }

        
    


      
