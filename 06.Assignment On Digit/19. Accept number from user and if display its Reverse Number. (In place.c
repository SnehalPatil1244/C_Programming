#include <stdio.h>
#include <conio.h>

int main()
{
    int num = 0, digit = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Reversed number: ");
    while (num != 0)
    {
        digit = num % 10;
        printf("%d", digit);
        num /= 10;
    }

    printf("\n");

    getch();
    return 0;
}
