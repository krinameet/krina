#include <stdio.h>
int main()
 {
    int arr1[5], arr2[10], i, j = 0;

    printf("Enter 5 elements: ");
    for(i=0; i<5; i++)
        scanf("%d", &arr1[i]);

    for(i=0; i<10; i++)
    {
        if(i % 2 == 0)
        {
            arr2[i] = arr1[j++];
        } else
        {
            arr2[i] = 0;
        }
    }

    printf("Array after copying with skip:\n");
    for(i=0; i<10; i++)
        printf("%d ", arr2[i]);

        return 0;
}
