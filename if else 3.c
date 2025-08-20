#include<stdio.h>
void main()
{
   float ns,gs,a,d;
   printf("enter gross salary");
   scanf("%f" ,&gs);

if(gs>10000)
{
   a=(gs/100)*10;
   d=(gs/100)*3;
   ns=gs+a-d;
   printf("your net salary is%f\n",ns);
}
if(gs>5000)
{
   a=(gs/100)*7;
   d=(gs/100)*2;
   ns=gs+a-d;
   printf("your net salary is%f\n",ns);
}

}
