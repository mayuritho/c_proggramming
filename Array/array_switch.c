#include<stdio.h>
int main()
{
    int a[100],i,j,key,pos,cnt,n,ch,flag;
    printf("enter a number");
    scanf("%d",&n);

    printf("enter a number\n");
     for(i=0;i<n;i++)
     scanf("%d",&a[i]);

     while(1)
     {
        printf("1.Display\n 2. Search\n 3. Insert\n 4. Delete\n 5. count\n 6. Reverse\n 7.Exit\n Enter a choice:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
            for(i=0;i<n;i++)
            printf("%d\n",a[i]);
              break;
        case 2:              //linear search
          flag=0;
          printf("enter a number for search");
          scanf("%d",&key);
          for(i=0;i<n;i++)
          {
            if(key==a[i])
            {
                flag=1;
                break;     //for loop
            }
          }
          if(flag)
          printf("%d is Found !!",key);
         else
           printf("%d is not found",key);
        break;                      //switch


        case 6:
          for(i=0;i<n/2;i++)
          {
            int temp=a[i];
            a[i]=a[n-1-i];
            a[n-1-i]=temp;
          }
          printf("Reverse number\n");
          for(i=0;i<n;i++)
          printf("%d\n",a[i]);
        

        default:
           printf("Invalid choice");
           break;
        }
    }
}