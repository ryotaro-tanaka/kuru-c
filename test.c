#include <stdio.h>

int sum(int, int);

int main(void)
{
    for (size_t i = 0; i < 10; i++)
    {
        sum(0, 0);
    }
    
    printf("%d\n", sum(10, 20));
    return 0;
}

int sum(int i1, int i2)
{
    static int count; // what?
    count++;
    printf("count = %d\n", count);
    return i1 + i2;
}
