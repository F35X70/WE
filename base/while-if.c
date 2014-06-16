#include <stdio.h>
 int foo(int x,int y)
{
  while(x){
  printf("input while\n");
  ++x;
  ++y;
  }
  if (y)
  {
    printf("input if\n");
    --y;
  }
  return x+y;
}
void main ()
{
  printf("==>input -1,-1\n");
  printf ("%d\n",foo(-1,-1));
  printf("==>input 0,-1\n");
  printf ("%d\n",foo(0,-1));
}
