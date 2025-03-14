#include"Header.h"
void Addition();
void Substraction();
void multiply();
void Division();
void Reminder();

void main()
{
    int choice =0;
    char ch = '\0';

    while(1)
    {
        printf("\n\t\t**********CALCULATOR**************");
        printf("\n\n======================================");
        printf("\n\n\t A Number From A Given Choice");
        printf("\n\t press 1 For Additon");
        printf("\n\t Press 2 For Substraction");
        printf("\n\t Press 3 for multiply");
        printf("\n\t Press 4 for Division");
        printf("\n\t Press 5 For Reminder");
        printf("\n\t Press 6 For Exit");
        printf("\n\t======================================");

        printf("\n\t Enter A Number Do You Have To Enter : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
        Addition();
        getch();
        system("cls");
        break;

        case 2:
            Substraction();
            getch();
            system("cls");
            break;

        case 3:
            Multiply();
            getch();
            system("cls");
            break;

        case 4:
            Division();
            getch();
            system("cls");
            break;

        case 5:
            Reminder();
            getch();
            system("cls");
            break;

        case 6:
            printf("\n\n\t Do You Want To Exit This Application...(Yes\No):");
            fflush(stdin);
            ch = getchar();
            if((ch == 'Y') || (ch == 'y'))
            {
                system("cls");
                goto DWN;
            }
            getch();
            system("cls");
            break;

            default:
                printf("\n\n\t invalid Credential....\n\n Press Enter Go To Back...");
                printf("\n\n\t=======================================");
                getch();
                system("cls");
        }



    }
        DWN:
            printf("\n\n\t===========================================");
            printf("\n\n\t ========Thanks To Use Calculator========");
            printf("\n\n\t===========================================");

    getch();
    return 0;

}
