// $ make
#include <stdio.h>
#include "sum.h"

int main(void)
{
    int value;
    value = sum(1, 10);
    printf("%d\n", value);
    return 0;
}
