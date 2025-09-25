#include <stdio.h>

int main() {
    int N, D;

    printf("Enter the number (N): ");
    scanf("%d", &N);

    printf("Enter the divisor (D): ");
    scanf("%d", &D);

    if (D != 0) {
        if (N % D == 0) {
            printf("Divisible\n");
        } else {
            printf("Not Divisible\n");
        }
    } else {
        printf("Divisor cannot be zero\n");
   }
}
