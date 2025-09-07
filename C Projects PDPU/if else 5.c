#include<stdio.h>
void main()
{ float gs,ns,d;

 printf("enter gross sales");
 scanf("%f",&gs);
 if(gs>20000)
 {
   d=gs*0.15;
   ns=gs-d;
   printf("your not sales is %f\n",ns);
 }
 if(20000>gs>10000)
 {
   d=gs*0.1;
   ns=gs-d;
   printf("your not sales is %f\n",ns);
 }
 else
 {
   d=gs*0.05;
   ns=gs-d;
   printf("your not sales is %f\n",ns);
 }
 }
