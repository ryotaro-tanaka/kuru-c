#include <stdio.h>

int main(void)
{
    FILE *file;
    file = fopen("output.dat", "wb");

    int buf = 100;
    fwrite(&buf, sizeof(buf), 1, file);

    fclose(file);
    return 0;
}