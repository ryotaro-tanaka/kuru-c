// gcc main.c sum.c

#include <stdio.h>
#include "sum.h"

int main(void)
{
    int value;
    value = sum(1, 11);
    printf("%d\n", value);
    return 0;
}
