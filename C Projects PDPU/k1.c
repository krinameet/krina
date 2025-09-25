#include <stdio.h>

int main()
{
int n,sum = 0;
int i=1;
printf("Enter the number (n): ");
scanf("%d", &n);

for(int i=1; i<=n; i++ )
{
sum += 2*i-1;
}
printf("The sum of all %d odd numbers is: %d\n", n, sum);
}
