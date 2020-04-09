#include <stdio.h>

int main(int argc, char *argv[])
{
    while (argc > 0) {
        argc--;

        if (argv[argc][0] == '-') {
            if (argv[argc][1] == 'a') printf("option a\n");
        }
    }
    return 0;
}