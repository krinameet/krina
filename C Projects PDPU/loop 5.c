#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of odd numbers to print: ");
    scanf("%d", &n);

    printf("The first %d odd numbers are:\n", n);
    for (i = 1; i <= 2 * n; i += 2) {
        printf("%d ", i);
    }
}
