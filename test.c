#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[256], str2[] = "ABC";
    scanf("%s", str1);
    printf("%d\n", strcmp(str1, str2));
    return 0;
}