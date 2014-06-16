#define SQ(z) z*z
void foo(int x, int *py)
{
  int n =SQ(x+1);
  x= *py;
  printf("x in foo:%d\n",x);
  *py=n;
}
int a = 2;
int b = 10;
void test()
{
  foo(a,&b);
  ++b;
}
void main()
{
  test();
  printf("a:%d,b:%d",a,b);
}
