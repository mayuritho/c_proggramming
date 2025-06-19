#include<stdio.h>
int main()
{
    int h,m,s;
    printf("enter hours");
    scanf("%d",&h);
    printf("enter minutes");
    scanf("%d",&m);
    printf("enter second");
    scanf("%d",&s);
    if(h>=0 &&h<24)
    {                 
        if(m>=0&& m<60)
        {
            if(s>=0&&s<60)
             printf("Time is vaild");
            else 
              printf("Second are Invalid");
        }
        else
         printf("minutes are Invalid");
    }
    else
      printf("hours are Invalid");
    return 0;

}