// Ref: https://diveintosystems.org/exercises/section-1_6.html

#include <stdio.h>
#include <string.h>

struct personT
{
    char name[64];
    int age;
    float height;
};

int main(void)
{
    struct personT p;

    strcpy(p.name, "Dharma");
    p.age = 31;
    p.height = 183;

    printf("Name: %s\n", p.name);

    return 0;
}
