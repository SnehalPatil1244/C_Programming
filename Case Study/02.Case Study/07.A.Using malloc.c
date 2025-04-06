///Student information For admission...

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
    int i =0, Cnt =0;
    struct stud *StdPtr;

    printf("Enter Count Of Students :");
    scanf("%d",&Cnt);

    StdPtr = (struct stud*) malloc (sizeof(struct stud) * (Cnt));

    printf("\n\n Enter Student Details :");

    for(i = 0; i < Cnt; i++)
    {
        Accept_Student_Details(&StdPtr[i]);
    }

    printf("\n\n Student Details :");

    for(i = 0; i < Cnt; i++)
    {
        Display_Student_Details(&StdPtr[i]);
    }

    printf("\n====================================");
    printf("\n Thanks For Using Our Application...");
    printf("\n====================================");

    getch();
    return 0;
}

Accept_Student_Details(struct stud *sPtr)
{
    printf("\n Enter Roll No :");
    scanf("%d",&sPtr->Roll_No);

    printf("\n Enter Name :");
    scanf("%s",&sPtr->Name);

    fflush(stdin);

    printf("\n Enter Marks In Phys :");
    scanf("%d",&sPtr->Phy);

    printf("\n Enter Marks In Chem :");
    scanf("%d",&sPtr->Chem);

    printf("\n Enter Marks In maths :");
    scanf("%d",&sPtr->Maths);

    sPtr->Total = sPtr->Phy + sPtr->Chem + sPtr->Maths;
    sPtr->Per = (sPtr->Total / 300) * 100;

    return;
}
Display_Student_Details(struct stud *sPtr)
{
    printf("\n=====================================");
    printf("\n Roll_Number = %d",sPtr->Roll_No);
    printf("\n Name        = %s",sPtr->Name);
    printf("\n Total Marks = %f",sPtr->Total);
    printf("\n Percentage  = %0.3f",sPtr->Per);
    printf("\n=======================================");
    return;
    getch();
}






