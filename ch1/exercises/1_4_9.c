// Ref: https://diveintosystems.org/exercises/section-1_4.html

#include <stdio.h>

int fibo(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    return fibo(n - 1) + fibo(n - 2);
}

int main(void)
{
    // test cases
    printf("Fibo of 3: %d (should be 2)\n", fibo(3));
    printf("Fibo of 4: %d (should be 3)\n", fibo(4));
    printf("Fibo of 5: %d (should be 5)\n", fibo(5));
    printf("Fibo of 6: %d (should be 8)\n", fibo(6));
    printf("Fibo of 7: %d (should be 13)\n", fibo(7));
    printf("Fibo of 10 is: %d (should be 55)\n", fibo(10));

    return 0;
}