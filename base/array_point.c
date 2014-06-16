#include <stdio.h>
int main ()
{
  int sum=0;
  int ary[][4] = {1,3,5,7,9,13,15,17,19,21};
  int (*ptr)[4] = ary;
    sum = (*ptr)[1]+ary[0][3]+ary[1][2];
  printf("ptr[1]:%d\n",(*ptr)[1]);
  printf("[0][3]:%d\n",ary[0][3]);
  printf("[1][2]:%d\n",ary[1][2]);
  printf("sum:%d\n",sum);
  return 0;
}
/* 
 * 有​关​指​针​的​经​典​面​试​题​集​合
 * http://wenku.baidu.com/view/b2cdf27d31b765ce050814e5.html
 * 5.4.2 变长数组的初始化
 * http://course.cug.edu.cn/cugFirst/Adv_program/chapter5/5.4.2.htm
*/
/*
用变量a给出下面的定义
a) 一个整型数（An integer）
b) 一个指向整型数的指针（A pointer to an integer）
c) 一个指向指针的的指针，它指向的指针是指向一个整型数（A pointer to a pointer to an integer）
d) 一个有10个整型数的数组（An array of 10 integers）
e) 一个有10个指针的数组，该指针是指向一个整型数的（An array of 10 pointers to integers）
f) 一个指向有10个整型数数组的指针（A pointer to an array of 10 integers）
g) 一个指向函数的指针，该函数有一个整型参数并返回一个整型数（A pointer to a function that takes an integer as an argument and returns an integer）
h) 一个有10个指针的数组，该指针指向一个函数，该函数有一个整型参数并返回一个整型数（ An array of ten pointers to functions that take an integer argument and return an integer ）
 
a) int a; // An integer
b) int *a; // A pointer to an integer
c) int **a; // A pointer to a pointer to an integer
d) int a[10]; // An array of 10 integers
e) int *a[10]; // An array of 10 pointers to integers
f) int (*a)[10]; // A pointer to an array of 10 integers
g) int (*a)(int); // A pointer to a function a that takes an integer argument and returns an integer
h) int (*a[10])(int); // An array of 10 pointers to functions that take an integer argument and return an integer
*/
