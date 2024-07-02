// Ref: https://diveintosystems.org/exercises/section-1_4.html

#include <stdio.h>

int power_recursive(int base, int exp)
{
    if (exp == 0)
    {
        return 1;
    }
    return base * power_recursive(base, exp - 1);
}

int power_iterative(int base, int exp)
{
    int result = 1;
    for (int i = 0; i < exp; i++)
    {
        result *= base;
    }

    return result;
}

int power(int base, int exp)
{
    // return power_recursive(base, exp);
    return power_iterative(base, exp);
}

int main(void)
{
    // test cases
    printf("3**2: %d (should be 9)\n", power(3, 2));
    printf("4**4: %d (should be 256)\n", power(4, 4));
    printf("2**6: %d (should be 64)\n", power(2, 6));
    printf("10**3: %d (should be 1000)\n", power(10, 3));
    printf("5**0: %d (should be 1)\n", power(5, 0));

    return 0;
}