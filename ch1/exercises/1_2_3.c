// Ref: https://diveintosystems.org/exercises/section-1_2.html

#include <stdio.h>

int main(void)
{
    float base, height, area;

    printf("Please enter the base and height of a right triangle: ");
    scanf("%g%g", &base, &height);

    area = 0.5 * (base * height);
    printf("The area of the right triangle is: %g\n", area);

    return 0;
}