#include <stdio.h>
int main()
{
    int n, i, value, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("Enter value to search: ");
    scanf("%d", &value);

    for(i=0; i<n; i++) {
        if(a[i] == value) {
            printf("Value %d found at position %d\n", value, i);
            found = 1;
        }
    }

    if(!found)
        printf("value %d not found in the array\n", value);

    return 0;

}
