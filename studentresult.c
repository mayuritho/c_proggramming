#include<stdio.h>
int main()
{
    int roll;
    char name[100],sub1[100],sub2[100],sub3[100];
    float m1,m2,m3,total,avg;
    char grade;
    printf("enter a student Details:");
    printf("\nRoll Number:");
    scanf("%d",&roll);
    printf("Name:");
    scanf("%s",&name);
    printf("1st subject Name:");
    scanf("%s",&sub1);
    printf("Marks:");
    scanf("%f",&m1);
    printf("2nd subject Name:");
    scanf("%s",&sub2);
    printf("Marks:");
    scanf("%f",&m2);
    printf("3rd subject Name:");
    scanf("%s",&sub3);
    printf("Marks:");
    scanf("%f",&m3);
      
    total =m1+m2+m3;
    avg= total/ 3;

      if(avg <=100&& avg>=90)
       grade='O';
     else if(avg <=90&& avg>=80)
       grade='A';
     else if(avg <=80&& avg>=70)
       grade='B';
     else if(avg <=70&& avg>=60)
       grade='C';
     else if(avg <=60&& avg>=50)
       grade='D';
    else if(avg <=50&& avg>=40)
       grade='E';
    else
      grade='F';

      printf("\n\t\tRoll Number    :%d",roll);
      printf("\n\t\tName           :%s",name);
      printf("\n\t\tsubject 1      :%s",sub1);
      printf("\n\t\tMarks          :%.2f",m1);
      printf("\n\t\tsubject 2      :%s",sub2);
      printf("\n\t\tMarks          :%.2f",m2);
      printf("\n\t\tsubject 3      :%s",sub3);
      printf("\n\t\tMarks          :%.2f",m3);
      printf("\n\t\ttotal          :%.2f",total);
      printf("\n\t\tAverage        :%.2f",avg);
      printf("\n\t\tGrade          :%c",grade);

      return 0;




}