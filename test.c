#include <stdio.h>
#include <string.h>

// int arrayPrint(int x[]);

int main(void)
{
    int array[] = {11, 22, 33, 44, 55};
    int array2[] = {0, 0, 0, 0, 0};

    memcpy(array, array2, sizeof array2);

    for (size_t i = 0; i < sizeof(array) /sizeof(array[0]); i++)
    {
        printf("%d\n", array[i]);
    }
    
    return 0;
}

// int arrayPrint(int array[]) {
//     printf("%ld\n", sizeof array);

//     // for (size_t i = 0; i < sizeof(array) /sizeof(array[0]); i++)
//     // {
//     //     printf("%d\n", array[i]);
//     // }

//     return 0;
// }