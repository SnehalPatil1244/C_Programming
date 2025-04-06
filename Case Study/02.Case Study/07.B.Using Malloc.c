/// Student Information for Admission ....

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void Accept_Student_Details();
void Display_Student_Details();

struct stud
{
    int Roll_No;
    char Name[40];
    int Phy;
    int Chem;
    int Maths;
    float Total;
    float Per;
};

int main()
{
    int Cnt = 0;
    struct stud *Stdptr;

    printf("Enter Count Of Student ");
    scanf("%d",&Cnt);

    Stdptr = (struct Stud*) malloc (sizeof(struct stud) * (Cnt));

    printf("\n Enter Student Details :");
    Accept_Student_Details(Stdptr,&Cnt);

    printf("\n Student Details :");
    Display_Student_Details(Stdptr,&Cnt);

    printf("\n================================");
    printf("\n Thanks For Usinf This Application..");
    printf("\n================================");

    getch();
    return 0;

}

Accept_Student_Details(struct stud *sPtr, int *sCnt)
{
    int i = 0;

    for( i =0; i < *sCnt; i++)
    {
        printf("\n Roll No is :%d",i+1);
        sPtr[i].Roll_No = i+1;

        printf("\n Enter Name :");
        scanf("%s",sPtr[i].Name);

        fflush(stdin);

        printf("\n Enter Marks In Phys :");
        scanf("%d",&sPtr[i].Phy);

        printf("\n Enter Marks In Chem :");
        scanf("%d",&sPtr[i].Chem);

        printf("\n Enter Marks In Maths :");
        scanf("%d",&sPtr[i].Maths);

        sPtr[i].Total = sPtr[i].Phy + sPtr[i].Chem + sPtr[i].Maths;
        sPtr[i].Per = (sPtr[i].Total / 300) * 100;

    }
    return;

}

Display_Student_Details(struct stud *sPtr, int *sCnt)
{
    int i = 0;
     for(i =0; i < *sCnt; i++)
     {
         printf("\n==============================");
         printf("\nRoll No      =%d",sPtr[i].Roll_No);
         printf("\n Name        =%s",sPtr[i].Name);
         printf("\n Total Marks =%f",sPtr[i].Total);
         printf("\n Percentage  =%0.3f",sPtr[i].Per);
         printf("\n================================");

     }
     return;
     getch();
}
