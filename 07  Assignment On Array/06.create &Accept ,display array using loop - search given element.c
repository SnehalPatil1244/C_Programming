#include<stdio.h>
#include<conio.h>

int main()
{

     int i =0, Arr[7]={},srch =0;

    for(i =0; i<7; i++)
    {
        printf("Enter value of %d Element :",i+1);
        scanf("%d",&Arr[i]);
    }

    getch();
    printf("\n\n");

    for(i=0; i<7; i++)
    {
        printf("value of %d element is :%d\n",i+1,Arr[i]);
    }


    printf("\n Enter number for search :");
    scanf("%d",&srch);

    for(i=0; i<7; i++)
    {
        if(srch == Arr[i])
        {
            break;
        }
    }
    if(i<7)
    {
        printf("Given Element %d found in index no %d",srch,i);
    }
    else
    {
        printf("Given Element %d Not Found in index no %d",srch);

}

getch();
return 0;
}
