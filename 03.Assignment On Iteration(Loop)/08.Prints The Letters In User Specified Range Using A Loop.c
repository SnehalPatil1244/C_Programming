<<<<<<< HEAD
///Write a program to print the letters in user specified range using a loop. (forward or reverse range, variable range)

#include<stdio.h>
#include<conio.h>

void main()
{
    char ch1 = '\0', ch2 = '\0';

    printf("\nEnter First :");
    scanf("%c",&ch1);
    fflush(stdin);
    printf("\nEnter End  :");
    scanf("%c",&ch2);

     if(ch1 < ch2 )
     {
         while(ch1 <= ch2)
         {
             printf("\n%c",ch1);
             ch1++;
         }
     }
     else
     {
         while(ch1 >= ch2)
         {
             printf("\n%c",ch1);
              ch1 --;
         }
     }

    getch();
    return ;
}
=======
///Write a program to print the letters in user specified range using a loop. (forward or reverse range, variable range)

#include<stdio.h>
#include<conio.h>

void main()
{
    char ch1 = '\0', ch2 = '\0';

    printf("\nEnter First :");
    scanf("%c",&ch1);
    fflush(stdin);
    printf("\nEnter End  :");
    scanf("%c",&ch2);

     if(ch1 < ch2 )
     {
         while(ch1 <= ch2)
         {
             printf("\n%c",ch1);
             ch1++;
         }
     }
     else
     {
         while(ch1 >= ch2)
         {
             printf("\n%c",ch1);
              ch1 --;
         }
     }

    getch();
    return ;
}
>>>>>>> 0151dfa5707bbcb0d50e2fdfd9e722231b879418
