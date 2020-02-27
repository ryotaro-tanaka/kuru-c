#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str[] = "145";
    char str2[10];
    strcpy(str2, str);

    printf("%d\n", atoi(str2));
    return 0;
}