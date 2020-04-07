#include <stdio.h>

int main(void)
{
    int *p, i;
    p = &i;
    printf("%p\n%p\n", &i, p);
    return 0;
}