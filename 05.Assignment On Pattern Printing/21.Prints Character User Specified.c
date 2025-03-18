/* A
   A B
   A B C
   A B C D  */

   #include<stdio.h>
   #include<conio.h>

   int main()
   {
       int R =0, C = 0, Num =0;

       printf("Enter A Number :");
       scanf("%d",&Num);

       for(R =1; R <= Num; R++)
       {
           char ch ='A';
           for(C =1; C<=Num; C++)
           {
               printf("%c",ch);
               ch++;
           }
           printf("\n");
       }
       getch();
       return 0;
   }
