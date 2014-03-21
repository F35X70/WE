#include <stdio.h>

char gFun(int a)
{
    printf(":%d\n", a);
    return 'Y';
}

/* Method 1 */
char (*p1Fun) (int);

/* Method 2 */
typedef char(*PFUN)(int);
PFUN p2Fun;

/* Method 3 */
void fp_wrapper(int i, PFUN handler)
{
    handler(i);
    (*handler)(i);
    ((PFUN)(*handler))(i);
}

int main()
{
    /* Method 1 */
    p1Fun = gFun;
    (*p1Fun) (2);
    p1Fun (2);

    /* Method 2 */
    p2Fun = gFun;
    (*p2Fun)(3);
    p2Fun(3);

    /* Method 3 */
    fp_wrapper(4,gFun);
}



/*
 * typedef 函数指针的用法（附例子）
 * http://fouri.iteye.com/blog/483974
 * Exercise 18: Pointers To Functions
 * http://c.learncodethehardway.org/book/ex18.html
 * typedef函数指针用法
 * http://blog.csdn.net/qll125596718/article/details/6891881
 * google search 'typedef  函数指针' and acpi_table_handler
 * C/C++ 函数指针 总结
 * http://blog.csdn.net/wangshihui512/article/details/9787125
*/
