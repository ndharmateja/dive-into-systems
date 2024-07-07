// Ref: https://diveintosystems.org/exercises/section-2_2.html

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x, y, temp;
    int *ptr1, *ptr2;

    x = 6;
    y = 7;
    printf("(before) x: %d, y: %d\n", x, y);

    // Swap values
    ptr1 = &x;
    ptr2 = &y;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("(after) x: %d, y: %d\n", x, y);

    return 0;
}
