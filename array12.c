#include <stdio.h>
int main() {
    int n, i, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Enter new value: ");
    scanf("%d", &value);


    for(i=n; i>0; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = value;
    n++;

    printf("Array after insertion: ");
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);

    return 0;
}
