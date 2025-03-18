/* Print :
a A a A
b B b B
c C c C
d D d D
e E e E */

#include<stdio.h>
#include<conio.h>

int main()
{
    int R =0, C =0, Rcnt =0, Ccnt= 0;
    char ch1 ='A',ch2 = 'a';

    printf("Enter Row Count :");
    scanf("%d",&Rcnt);
    printf("Enter Colunm Count :");
    scanf("%d",&Ccnt);

    for(R = 1; R<=Rcnt; R++)
    {
        for(C =1; C<=Ccnt; C++)
        {
            if(C % 2 != 0)
            {
                printf("%3c",ch2);
            }
            else
            {
                printf("%3c",ch1);
            }
        }
        printf("\n");
        ch2++;
        ch1++;
    }
    getch();
    return 0;
}
