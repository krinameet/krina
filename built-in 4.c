#include<stdio.h>
#include<string.h>
void main()
{
    int i;
char str[]="AbC";
for(i=0;i<=str[i];i++)
{
  if (str[i]>='A' && str[i]<='Z')
  {
    str[i]=str[i]+32;
  }
  else if(str[i]>='a' && str[i]<='z')
  {
    str[i]=str[i]-32;
  }
}
  printf("%s",str);
}
