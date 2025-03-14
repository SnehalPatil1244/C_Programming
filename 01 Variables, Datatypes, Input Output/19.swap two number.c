
 #include<stdio.h>
 #include<conio.h>
 #include <stdlib.h>

 int main()
 {

     int No1=0, No2=0,Store;

     printf("Enter First Number:\n");
     scanf("%d",&No1);

     printf("Enter Second Number:\n");
     scanf("%d",&No2);

     Store=No1;
     No1=No2;
     No2=Store;

     printf("\nEnter number After Swapping :number1=%d, number2=%d",No1,No2);

     getch();
     return 0;
 }
