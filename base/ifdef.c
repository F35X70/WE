#include <stdio.h>
void printsum(int x,int y)
{
  int sum=0;
#ifdef DO_IT
  sum= x+y;
#endif//DO_IT
  printf("%d\n",sum);
}
int test1()
{
  printsum(1,2);
}
#define DO_IT
int test2()
{
  printsum(3,4);
}

int main ()
{
  test1();
  test2();
  return 0;
}
