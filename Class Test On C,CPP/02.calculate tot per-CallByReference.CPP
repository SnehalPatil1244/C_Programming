using namespace std;
#include<iostream>
#include<conio.h>
#include<stdlib.h>

void calculate (int, int, int, int&,float&);

int main()
{
    int phy = 0, chem = 0, maths = 0, tot_marks =0;
    float percent = 0.0;

    cout << "\n Enter 3 Subjects Marks => \n";

    cout << "\n Enter Physics Marks : ";
    cin >> phy;

    cout << "\n Enter Chemistry Marks :";
    cin >> chem;

    cout << "\n Enter Mathematics Marks :";
    cin >> maths;

    calculate(phy, chem, maths, tot_marks, percent);

    cout << "\n ==============*******================";

    cout << "\n\n Student Report Card => \n";
    cout << "\n\t physics = " << phy;
    cout << "\n\t Chemistry = " << chem;
    cout << "\n\t Mathematics = " << maths;
    cout << "\n ----------------------------------";
    cout << "\n\t total marks = " << tot_marks;
    cout << "\n\t percentage = " << percent;

    cout << "\n\n =====================*******===========================";
    getch();
    return 0;


}
void calculate(int p,int c,int m,int &tot, float &per)
{
    tot = p+c+m;
    per = ((float)(tot))/3;
    return;
}
