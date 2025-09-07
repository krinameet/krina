#include<stdio.h>
void main()
{
  int a,b;
  printf("enter two no.\n");
  scanf("%d %d",&a,&b);
  if(a>b)
 {
   printf("%d is largest\n",a);
   printf("%d is smallest\n",b);
}
else
{
  printf("%d is largest\n",b);
  printf("%d is smallest\n",a);
  }
}

