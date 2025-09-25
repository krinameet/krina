
#include <stdio.h>

void main() {
    int n, i;
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter the number of times to print your name: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
{
        printf("%s\n", name);
}
}
