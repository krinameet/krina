#include<stdio.h>
void main()
{
  float p,c,m,t,a;
  printf("Marks");
  scanf("%f,%f,%f",&p,&m,&c);
  t=p+m+c;
  a=t/3;
  if(100>a>=70)
  printf("you are passed with distinction");
  if(70>a>=60)

  printf("you are passed with first class");
  if(60>a>=50)

  printf("you are passed with second class");
  if(50>a>=35)
 {
  printf("you are passed with third class");
}
else
{
  printf("unfortunately you are failed");
}
if(p<35 && c<35 && m<35)
{
  printf("unfortunately you are failed");
}
}

