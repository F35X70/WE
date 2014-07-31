#include <stdio.h>
int switch1()
{
  int n;
  int c;
  for (c=0;c<=6;c++)
  {
    n=0;
    printf("begin switch c:%d\n",c);
    switch(c) {
      printf("into switch c:%d\n",c);
      case 1: 
      printf(" 1 c:%d\n",c);
          n++;
      case 2: 
      printf(" 2 c:%d\n",c);
            n++;
            break;
      case 3: 
      printf(" 3 c:%d\n",c);
          n++;
      case 4: 
      printf(" 4 c:%d\n",c);
          n++;
      case 5: 
      printf(" 5 c:%d\n",c);
          n++;
          break;
      default:
      printf(" default  c:%d\n",c);
          n++;
          break;
    }
  }
  printf("n:%d\n",n);
}
int switch2()
{
  int n;
    n=0;
  int c;
  for (c=0;c<=6;c++)
  {
    printf("begin switch c:%d\n",c);
    switch(c) {
      printf("into switch c:%d\n",c);
      case 1: 
      printf(" 1 c:%d\n",c);
          n++;
      case 2: 
      printf(" 2 c:%d\n",c);
            n++;
            break;
      case 3: 
      printf(" 3 c:%d\n",c);
          n++;
      case 4: 
      printf(" 4 c:%d\n",c);
          n++;
      case 5: 
      printf(" 5 c:%d\n",c);
          n++;
          break;
      default:
      printf(" default  c:%d\n",c);
          n++;
          break;
    }
  }
  printf("n:%d\n",n);
}

int main ()
{
  switch1();
  switch2();
  return 0;
}
