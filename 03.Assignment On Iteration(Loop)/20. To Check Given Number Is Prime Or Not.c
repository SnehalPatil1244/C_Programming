<<<<<<< HEAD
///Write to program to check whether a given number is prime or not.
#include<stdio.h>
#include<conio.h>

void main()
{
    int i =0, num =0;
    int prime =1;

    printf("Enter A Number :");
    scanf("%d",&num);

    if(num <= 1)
    {
        prime =0;
    }
    for( i= 2; i < num ; i++)
    {
        if(num % i ==0)
        {
            prime =0;
            break;
        }
    }
    if(prime)
    {
        printf("%d Is Prime Number",num);
    }
    else
    {
        printf("%d Is Not Prime Number",num);
    }
    getch();
    return 0;
}

=======
///Write to program to check whether a given number is prime or not.
#include<stdio.h>
#include<conio.h>

void main()
{
    int i =0, num =0;
    int prime =1;

    printf("Enter A Number :");
    scanf("%d",&num);

    if(num <= 1)
    {
        prime =0;
    }
    for( i= 2; i < num ; i++)
    {
        if(num % i ==0)
        {
            prime =0;
            break;
        }
    }
    if(prime)
    {
        printf("%d Is Prime Number",num);
    }
    else
    {
        printf("%d Is Not Prime Number",num);
    }
    getch();
    return 0;
}

>>>>>>> 0151dfa5707bbcb0d50e2fdfd9e722231b879418
