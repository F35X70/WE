#include <stdio.h>

int test1(int a, int b, int c);
int test2(int a, int b, int c);
void main()
{
int a=1;
int b=2;
int c=3;
  test1(a,b,c);
  test2(a,b,c);
int d=6;
int e=5;
int f=4;
  test1(d,e,f);
  test2(d,e,f);
}

int test1(int a, int b, int c)
{
  printf("loop : %d,%d,%d\n",a,b,c);
  return (a<=b && a<=c) ? a : test1(b,c,a);
}
int test2(int a, int b, int c)
{
  return (a<=b && a<=c) ? a : (b<=c) ? b : c ;
}
