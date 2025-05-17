#include<stdio.h>
int main()
{
    int roll;
    char name [100],collegename[100],email[100],contact[100],s1[100],s2[100],s3[100],dob[100];
    float total,avg,m1,m2,m3;

    printf("enter student details:");
    printf("Roll Number:");
    scanf("%d",&m1);
    printf("name:");
    scanf("%s",name);
    printf("collegename");
    scanf("%s",&collegename);
    prinatf("subject1:");
    scanf("%s",&s1);
    printf("subject2:");
    scanf("%s",&s2);
    printf("subject3:");
    scanf("%s",%s3);
    printf("marks 1:");
    scanf("%f",&m1);
    printf("marks 2:");
    scanf("%f",&m2);
    printf("marks 3:");
    scanf("%f",&m3);
    print("email");
    scanf("%s",&email);
    printf("contact:");
    scanf("%s",&contact);
    printf("dob:");
    scanf("%s",&dob);
    total=m1+m2+m3;
    avg=total/3;
    printf("Roll number:%d",roll);
    printf("\nname:%s",name);
    printf("\ncollegename   :%s",collegename);
    printf("\n subject 1    :%s",s1);
    printf("\n subject 2    :%s",s2);
    printf("\n subject 3    :%s",s3);
    printf("\n marks 1      :%f",m1);
    printf("\n marks 2      :%f",m2);
    printf("\n marks 3      :%f",m3);
    printf("\n avarage      :%s",avg);
    printf("\n total        :%s",total);
    return 0;
 }
