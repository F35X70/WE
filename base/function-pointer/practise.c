
char (*p1Fun) (int);


typedef char(*PFUN)(int);
PFUN p2Fun;

char gFun(int a)
{
    printf(":%d\n", a);
}

void main()
{
    p1Fun = gFun;
    (*p1Fun) (2);

    p2Fun = gFun;
    (*p2Fun)(3);
}



/*
 * typedef 函数指针的用法（附例子）
 * http://fouri.iteye.com/blog/483974
 * Exercise 18: Pointers To Functions
 * http://c.learncodethehardway.org/book/ex18.html
 * typedef函数指针用法
 * http://blog.csdn.net/qll125596718/article/details/6891881
 * google search 'typedef  函数指针' and acpi_table_handler
*/
