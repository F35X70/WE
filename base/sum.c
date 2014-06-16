#include <stdio.h>
void main()
{
  /* 1 2 5 10*/
  /*sum =50;*/
  int sum;
  int num=1;

  int a, b, c, d;
  for (a=0;a<=50;a++)
  {
    for(b=0;b<=25;b++)
    {
      for(c=0;c<=10;c++)
      {
        for(d=0;d<=5;d++)
        {
            sum= a*1 + b*2 + c*5 + d*10;
            if(50 == sum)
            {
                printf("num[%d]: 1:%d, 2:%d, 5:%d, 10:%d\n",num,a,b,c,d);
                num++;
            }
        }
      }
    }
  }
}
