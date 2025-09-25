#include <stdio.h>
void main()
{
   int num, sum = 0;

   printf("Enter a number: ");
   scanf("%d", &num);

   for (; num != 0; num /= 10)
        {
       sum += num % 10;
   }
   printf("Sum of digits = %d\n", sum);
}
