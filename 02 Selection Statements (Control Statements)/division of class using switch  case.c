
#include<stdio.h>
#include<conio.h>

int main()
{
    char Division = 0;

    printf("Enter the Division:");
    scanf("%d",&Division);
    getch();

    switch(Division)
             {
                  case 'A':

                               printf("your Exam at 10 PM");
                               break;


                  case 'B':

                               printf("your Exam at 10:30 PM");
                               break;


                  case 'C':

                               printf("your Exam at 1 PM");
                               break;


                  case 'D':

                               printf("your Exam at 1:30 PM");
                               break;


                 default:

                              printf("invalid Division");
                              break;




    }
    getch();
    return 0;
}
