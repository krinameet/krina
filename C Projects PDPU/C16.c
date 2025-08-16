#include<stdio.h>
void main()
{
   float P,R,N,I;
   printf("Enter Pr. value");
   scanf("%f",&P);
   printf("Enter Rate value");
   scanf("%f",&R);
   printf("Enter no. of years");
   scanf("%f",&N);
   I=P*R*N/100;
   printf("the Interest =%f/n",I);

}
