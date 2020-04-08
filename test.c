#include <stdio.h>

void func(int *pvalue);

int main(void)
{
    int *data;
    int average = 0;
    int array[10] = {11,12,13,14,15,16,17,18,19,110};

    // !
    for (data = array; data != &array[10]; data++) {
        average += *data;
    }

    printf("%d\n", average / 10);
    return 0;
}