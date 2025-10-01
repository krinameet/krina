#include <stdio.h>
int main()
{
    int n, i, value;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("Enter new value: ");
    scanf("%d", &value);

    a[n] = value;
    n++;

    printf("Array after insertion: ");
    for(i=0; i<n; i++)
        printf("%d ", a[i]);

    return 0;

}
