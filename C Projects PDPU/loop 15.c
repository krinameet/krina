#include <stdio.h>

void main()
{
    int n, i;
     float sum = 0, mean;

    printf("Enter the number of values (n): ");
    scanf("%d", &n);

    printf("Enter %d values:\n", n);
    for (i = 0; i < n; i++)
    {
         float value;
        scanf("%f", &value);
        sum += value;
}

    mean = sum / n;

    printf("Sum = %.2f\n", sum);
    printf("Mean = %.2f\n", mean);
}
