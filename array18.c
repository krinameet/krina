#include <stdio.h>
int main()
{
    int n, i, j, value, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("Enter value to delete: ");
    scanf("%d", &value);

    for(i=0; i<n; i++) {
        if(a[i] == value) {
            found = 1;
            for(j=i; j<n-1; j++) {
                a[j] = a[j+1];
            }
            n--;
            i--;
        }
    }

    if(!found) {
        printf("Value not found in array!\n");
    } else
    {
        printf("Array after deletion: ");
    for(i=0; i<n; i++)
        printf("%d ", a[i]);
    }

    return 0;

}

