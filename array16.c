#include <stdio.h>
int main()
{
    int n, i, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("Enter position to delete (0 to %d): ", n-1);
    scanf("%d", &pos);

    if(pos < 0 || pos >= n) {
        printf("Invalid position!\n");
    } else
    {
        for(i=pos; i<n-1; i++) {
            a[i]=a[i+1];
        }
        n--;

    printf("Array after deletion: ");
    for(i=0; i<n; i++)
        printf("%d ", a[i]);
    }


    return 0;

}

