#include<stdio.h>
void main()
{
  float B,K,M,G;
  printf("Enter data value in bytes");
  scanf("%f",&B);
  K=B/1000;
  M=K/1000;
  G=M/1000;
  printf("the data value in KB =%f\n"
         "the data value in MB =%f\n"
         "the data value in G =%f\n",K,M,G);

}
