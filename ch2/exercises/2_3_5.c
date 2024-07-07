// Ref: https://diveintosystems.org/exercises/section-2_3.html

#include <stdio.h>

/* Returns the sums two numbers. */
int compute_sum(int x, int y)
{
    return x + y;
}

/* Returns the product of two numbers. */
int compute_product(int x, int y)
{
    return x * y;
}

/*
 * Function to perform calculations on input parameters x and y and set the
 * sum_result and prod_result parameters to their results.
 */
void calculate(int x, int y, int *sum_result, int *prod_result)
{
    *sum_result = compute_sum(x, y);
    *prod_result = compute_product(x, y);
}

int main(void)
{
    int a = 3, b = 4;
    int sum, product;

    calculate(a, b, &sum, &product);
    printf("sum of %d and %d is %d \n", a, b, sum);
    printf("product of %d and %d is %d \n", a, b, product);
    return 0;
}
