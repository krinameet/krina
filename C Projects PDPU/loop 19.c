#include <stdio.h>
void main()
{
    printf("Numbers divisible by 5 between 1 and 100 are:\n");

for (int i = 1; i <= 100; i++)
{
    if (i % 5 == 0)
{
  printf("%d ", i);
}

}
    printf("\n");
}
