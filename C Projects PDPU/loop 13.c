#include <stdio.h>

void main()
{
    int sum = 0;

    for (int i = 1; i <= 100; i++)
{
  if (i % 13 == 0)
{
  sum += i;
}
}
    printf("The sum of all no. divisible by 13 between 1 and 100 is: %d\n", sum);
}
