#include <stdio.h>

int main() {
    int TS = 50;
    int B = 0, G = 0;
    int sexCode;

    printf("Enter the sex code for each student (1 for Boy, 2 for Girl):\n");

    for (int i = 1; i <= TS; i++) {
        printf("Student %d: ", i);
        scanf("%d", &sexCode);

        if (sexCode == 1) {
            B++;
        } else if (sexCode == 2) {
            G++;
        } else {
            printf("Invalid input! Please enter 1 for Boy or 2 for Girl.\n");
            i--;
        }
    }

    printf("\nTotal Boys: %d\n", B);
    printf("Total Girls: %d\n", G);
}
