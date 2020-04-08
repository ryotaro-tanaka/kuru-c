#include <stdio.h>
#include <string.h>

struct student {
    int year;
    int clas;
    int number;
    char name[64];
    double stature;
    double weight;
};

int main(void)
{
    struct student data1, data2;

    // data1
    data1.year = 3;
    data1.clas = 4;
    data1.number = 18;
    strcpy(data1.name, "MARIO");
    data1.stature = 168.2;
    data1.weight = 72.4;

    // data2
    data2 = data1;

    // print
    printf("%s, %s\n", data1.name, data2.name);
    printf("%f, %f\n", data1.stature, data2.stature);

    return 0;
}
