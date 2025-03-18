#include <stdio.h>
#include <conio.h>

int main()
{
    int num = 0, evenSum = 0, oddSum = 0, digit = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        digit = num % 10;
        if (digit % 2 == 0)
        {
            evenSum += digit;
        }
        else
        {
            oddSum += digit;
        }
        num /= 10;
    }

    printf("Difference between sum of even and odd digits: %d\n", evenSum - oddSum);

    getch();
    return 0;
}
