#include <stdio.h>

int main(void)
{
    FILE *file;
    file = fopen("output.dat", "rb");

    int buf;
    fread(&buf, sizeof(buf), 1, file);

    fclose(file);

    printf("%d\n", buf);
    return 0;
}