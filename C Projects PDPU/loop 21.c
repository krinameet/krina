#include <stdio.h>
void main()
{
    int num, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    int reversed = 0;
    while (num > 0)
     {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }

    printf("Digits of the number are:\n");
    while (reversed > 0)
    {
        digit = reversed % 10;
        printf("%d\n", digit);
        reversed /= 10;
}
}
