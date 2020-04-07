#include <stdio.h>

int main(void)
{
    int *p, i;
    p = &i;
    *p = 10;
    printf("%d %d\n", *p, i);
    return 0;
}