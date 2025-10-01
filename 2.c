#include<stdio.h>
void main()
{
    int i;
    int a[10];

    printf("Enter 10 value = \n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);

    }

    printf("4th value is %d \n",a[3]);
    printf("7th value is %d \n",a[6]);
    printf("9th value is %d \n",a[8]);
}
