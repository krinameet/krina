#include<stdio.h>
void main()
{
  int a,b,c;
  printf("enter three no.\n");
  scanf("%d %d %d",&a,&b,&c);
  if(a>b)
 {
   if(a>c)
   printf("%d is largest\n",a);
   else
   printf("%d is largest\n",c);
}
else
{
  if(b>c)
  printf("%d is largest\n",b);
else
  printf("%d is largest\n",c);
  }
 if(a<b)
 {
   if(a<c)
   printf("%d is smallest\n",a);
   else
   printf("%d is smallest\n",c);
}
else
{
  if(b<c)
  printf("%d is smallest\n",b);
else
  printf("%d is smallest\n",c);
  }
}
