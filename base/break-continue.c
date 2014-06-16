#include <stdio.h>
 int test(int n)
{
  int i;
  int ret=0;
  for (i=0;i<=--n;i++)
  { 
    if (i>12) {
      printf ("==> into if");
      ret /= 2;
      break;
    }
    if (i >=4 && i<=6)
    {
        printf ("==> into continue\n");
        printf ("i:%d,n:%d\n",i,n);
        continue;
    }
    ++ret;
    printf ("++ret i:%d,n:%d\n",i,n);
  }
  return ret;
}
void main ()
{
  printf("5:%d\n",test(5));
  printf ("===============\n");
  printf("12:%d\n",test(12));
}
