#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str[16];
    char str1[] = "DRAGON";
    char str2[] = "QUEST";

    sprintf(str, "%s%s%s\n", str1, str2, "hohoho");
    printf("%s", str);
    return 0;
}