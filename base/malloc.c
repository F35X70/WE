#include <stdio.h>
 int func(int *x)
{
  printf ("%p\n",x);
  x = (int *) malloc (sizeof(int));
  printf ("%p\n",x);
  printf ("after malloc: %d\n",*x);
  *x = 12;
  printf ("%p\n",x);
}
static int y=10;
void main ()
{
  int x =10;
  func(&x);
  printf ("%p\n",&x);
  printf("x=%d\n",x);
  func(&y);
  printf("y=%d\n",y);
}
