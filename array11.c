#include <stdio.h>
int main() {
    int arr[10], res[10], n, i;

    printf("Enter 10 elements: ");
    for(i=0; i<10; i++)
        scanf("%d", &arr[i]);

    printf("Enter shift positions (n): ");
    scanf("%d", &n);

    for(i=0; i<10; i++) {
        if(i+n < 10)
            res[i+n] = arr[i];
    }
    for(i=0; i<n; i++)
        res[i] = 0;

    printf("Shifted array: ");
    for(i=0; i<10; i++)
        printf("%d ", res[i]);

    return 0;
}
