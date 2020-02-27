#include <stdio.h>

int main(void)
{
    char str[16];
    size_t i = 0;

    scanf("%15s", str);
    for (i = 0; str[i] != '\0'; i++);
    printf("%ld\n", i);
    return 0;
}