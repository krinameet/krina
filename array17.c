#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    if(n == 0) {
        printf("Array is empty, nothing to delete!\n");
    } else
    {
        n--;
    }

    printf("Array after deletion: ");
    for(i=0; i<n; i++)
        printf("%d ", a[i]);


    return 0;

}


