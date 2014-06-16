#include <stdio.h>
void main()
{
  int a = 0x7700;
  int b = 0x8800;
  int c = 0xff00;
  int e = (a && b) || c;
  int f = (a | b) & c ;
  printf ("%d,%x",e,f);
}
