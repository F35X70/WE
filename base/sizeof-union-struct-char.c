#include <stdio.h>
union u_t {
  char cv[16];
  int nval;
  double dval;
}u;
struct s_t {
  char cv[16];
  int nval;
  double dval;
}s;
char chval[16];
char * pval=chval;
void main()
{
  printf ("%d\n",sizeof(s));
  printf ("%d\n",sizeof(u));
  printf ("%d\n",sizeof(chval));
  printf ("%d\n",sizeof(pval));

  printf ("int:%d\n",sizeof(int));
  printf ("char:%d\n",sizeof(char));
}

/*
 * C/C++刁钻问题各个击破之细说sizeof
 * http://blog.csdn.net/w57w57w57/article/details/6626840
*/
