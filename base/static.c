#include <stdio.h>
int func()
{
  static int in1 = 10;
  int in2 = 0;
  in1 ++;
  in2 ++;
  return(in1+in2);
}
int main ()
{
 int var;
 int i;
  for (i=0;i<2;i++)
  var=func();
printf ("%d",var);
}
