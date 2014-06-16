#include <stdio.h>
#define X 100
void A() { printf("%d\n", X); }
void B() { printf("%d\n", X); }


void A1() { printf("%d\n", X); }
#define X 200
void B1() { printf("%d\n", X); }

void main()
{
    A();
    B();
}
