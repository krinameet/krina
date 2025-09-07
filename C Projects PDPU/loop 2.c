#include <stdio.h>

int main() {
    int i, odd = 1;

    printf("The first 10 odd numbers are:\n");
    for (i = 1; i <= 10; i++) {
        printf("%d ", odd);
        odd += 2;
    }
}
