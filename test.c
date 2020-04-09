#include <stdio.h>

int main(void)
{
    FILE *file;
    file = fopen("output.txt", "w");
    fprintf(file, "hello,world!!");
    fclose(file);
    return 0;
}