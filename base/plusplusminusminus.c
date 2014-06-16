#include <stdio.h>
int main ()
{
  int a=5;
  printf ("address: %p\n",&a);
  {
    int b=10;
    ++b;
    ++a;
  printf ("address: %p\n",&a);
    {
      int a =20;
      ++a;
  printf ("address: %p\n",&a);
      a=++b;
  printf ("address: %p\n",&a);
    }
    ++a;
  printf ("address: %p\n",&a);
    ++b;
    printf("%d %d\n",a,b);
  }
  printf (" %d \n",a);
  return 0;
}
