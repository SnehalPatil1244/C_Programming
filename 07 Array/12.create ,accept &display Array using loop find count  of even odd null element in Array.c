#include<stdio.h>
#include<conio.h>
 int main()
 {

     int Arr[7]={}, i = 0, Ecnt = 0, Ocnt = 0, Zcnt = 0;

     for(i = 0; i < 7; i++)
     {
         printf("Enter value of %d Element:",i+1);
         scanf("%d",&Arr[i]);


     }
         getch();
         printf("\n\n");

         for(i = 0; i < 7; i++)
         {
            printf("\n\n value of %d Element is:%d",i+1,Arr[i]);
            if((Arr[i] % 2 == 0) && (Arr[i] != 0))
            {
                Ecnt++;
            }
            else if(Arr[i] % 2 == 1)
            {
              Ocnt++;
            }
            else if(Arr[i] == 0)
            {
                Zcnt++;
            }
            else
            {
                printf("Invalid Element...");
            }
         }
            getch();

            printf("\n\n Even Count in the Array is:%d",Ecnt);
            printf("\n\n Odd Count in the Array is:%d",Ocnt);
            printf("\n\n null Count in the Array is:%d",Zcnt);

            getch();
            return 0;



 }
