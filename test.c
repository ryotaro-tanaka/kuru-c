#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c = '2';
    int i = 0;

    if (isdigit(c))
    {
        i = c - '0';
    }

    printf("%d\n", i);
    return 0;
}