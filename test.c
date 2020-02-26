#include <stdio.h>

int main(void)
{
    double r;
    do {
        printf("your input:");
        scanf("%lf", &r);
    } while (r < 0);
    
    printf("%f\n", r * r);

    return 0;
}
