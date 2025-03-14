#include<stdio.h>
#include<conio.h>

int main()
{

    int Day =0;

    printf("Enter The Day Number:");
    scanf("%d",&Day);

     if(Day == 1)
    {
        printf("It's Sunday.\n\n");
    }

    else if(Day == 2)
    {
        printf("It's monday.\n\n");
    }
    else if(Day == 3)
    {
       printf("It's Tuesday.\n\n");
    }
    else if(Day == 4)
    {
        printf("It's wednesday");
    }
    else if(Day == 5)
    {

        printf("It's thursday.\n\n");
    }

    else if(Day == 6)
    {
        printf("It's friday.\n\n");

    }
    else if(Day == 7)
    {
        printf("It's Saturday.\n\n");
    }

    getch();
    return 0;
}
