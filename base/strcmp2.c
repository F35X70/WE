#include <stdio.h>
int strcmp2(char * pstr1, char * pstr2)
{
  if (pstr1 == pstr2)
      return 0;
  else
      return 1;
}
void main()
{
  char str1[] = "abc";
  char str2[] = "abc";
  int var=strcmp2(str1,str2);
  printf("%d\n",var);
}
