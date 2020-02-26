#include <stdio.h>

int main(void)
{
    int val = 1;
    int count;
    while (val < 1000000)
    {
        val *= 2;
        count++;
        printf("%d,", val);
    }
    printf("\nc=%d, val=%d\n", count, val);
    
    return 0;
}
