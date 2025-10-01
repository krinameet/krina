#include<stdio.h>
void main()
{
    int i,j,q;
    int a[5];

    printf("Enter five value = \n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);

    }
    // babal method
    for(q=0;q<4;q++){

        for(i=0;i<4-q;i++){
            if(a[i]>a[i+1]){
                j = a[i];
                a[i]=a[i+1];
                a[i+1]=j;
            }
        }
    }

    printf("ascending order : ");
    for(j=0;j<5;j++){
        printf("%d",a[j]);
        printf("  ");
    }
}
