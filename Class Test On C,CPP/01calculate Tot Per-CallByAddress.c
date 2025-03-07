#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void calculate ( int , int , int , int*, float*);

int main()
{

    int phy =0 , chem =0, maths =0 ,tot_Marks =0;
    float percent = 0.0;

    printf("\n Enter 3 Subjects Marks => \n");
    printf("\n Enter Physics Marks :");
    scanf("%d",&phy);
    printf("\n Enter Chemistry Marks :");
    scanf("%d",&chem);
    printf("\n Enter Mathematics Marks :");
    scanf("%d",&maths);

    calculate(phy, chem, maths, &tot_Marks, &percent);

    printf("\n =================********====================");

    printf("\n\n Student Report Card => \n");
    printf("\n\t physics  =%d",phy);
    printf("\n\t Chemistry =%d",chem);
    printf("\n\t Mathematics  =%d",maths);
    printf("\n ------------------------------");
    printf("\n\t Total Marks =%d",tot_Marks);
    printf("\n\t percentage = %0.2f",percent);

    printf("\n\n ====================******====================");

    getch();
    return 0;
    }
void calculate(int p ,int c ,int m, int *tot, float *per)
    {
        *tot = p+c+m;
        *per = ((float)(*tot))/3;
        return;
    }
