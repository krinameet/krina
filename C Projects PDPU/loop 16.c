#include <stdio.h>

void main()
{
    int numbers[100], i, l, s;


    printf("Enter 100 numbers:\n");
    for (i = 0; i < 100; i++)
     {
        scanf("%d", &numbers[i]);
}
    l = s = numbers[0];

    for (i = 1; i < 100; i++)
    {
        if (numbers[i] > l )
         {
            l = numbers[i];
}
        if (numbers[i] < s)
        {
            s = numbers[i];
}
}
    printf("Largest number: %d\n", l);
    printf("Smallest number: %d\n", s);
}
