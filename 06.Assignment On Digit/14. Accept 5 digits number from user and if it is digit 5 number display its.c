#include <stdio.h>
#include <conio.h>

int main()
{
    int num = 0, digit = 0, sum = 0, count = 0;

    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    int tempNum = num;
    while (tempNum != 0)
    {
        tempNum /= 10;
        count++;
    }

    if (count == 5)
    {
        while (num != 0)
        {
            digit = num % 10;
            sum += digit;
            num /= 10;
        }
        printf("The sum of the digits is: %d\n", sum);
    }
    else
    {
        printf("Invalid input. Please enter a 5-digit number.\n");
    }

    getch();
    return 0;
}
