#include <stdio.h>

int sum(int, int);

int main(void)
{
    printf("%d\n", sum(10, 20));
    return 0;
}

int sum(int i1, int i2)
{
    return i1 + i2;
}
