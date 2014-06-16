#include <stdio.h>
int na[3] = {30,20,10};
int *pn;
int **ppn;
int main()
{
  pn=na;
  ppn=&pn;

  *pn -=1;
  pn = &na[1];
  **ppn += 1;
  pn ++;

  printf ("bb na[0]:%d\n",na[0]);
  printf ("bc na[1]:%d\n",na[1]);
  printf ("bd *p::%d\n",*pn);
  printf ("be **pn:%d\n",**ppn);
}
