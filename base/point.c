#include <stdio.h>
void main()
{
char ary[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
char *p1 =ary;
char *p2;
int *pn;

//void test()
{
  p1 += 2;
printf("*p1:%d,*p2:%d\n",*p1,99);
printf("p1[2]:%d\n",p1[2]);
  pn = (int *)&p1[2];
printf("*p1:%d,*p2:%d,pn:%d\n",*p1,99,*pn);

  pn +=1;
printf("*p1:%d,*p2:%d,pn:%d\n",*p1,99,*pn);
  p1 = (char *) pn;
printf("*p1:%d,*p2:%d,pn:%d\n",*p1,99,*pn);

  --pn;
printf("*p1:%d,*p2:%d,pn:%d\n",*p1,99,*pn);
  p2 = (char *)pn;
printf("*p1:%d,*p2:%d,pn:%d\n",*p1,*p2,*pn);
  --p2;
printf("*p1:%d,*p2:%d,pn:%d\n",*p1,*p2,*pn);
}
//test();
printf("*p1:%d,*p2:%d\n",*p1,*p2);
}
/*
 * 32位和64位系统区别及int字节数
 * http://blog.csdn.net/zhangxinbin5/article/details/7929591
*/
