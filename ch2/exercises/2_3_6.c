// Ref: https://diveintosystems.org/exercises/section-2_3.html

#include <stdio.h>

int swap(char *a, char *b);

int main(void)
{
    char alpha, beta;
    int ret;

    alpha = 'a';
    beta = 'b';

    ret = swap(&alpha, &beta);
    printf("alpha: %c beta: %c \n", alpha, beta);
    printf("The return value is: %d\n", ret);

    return 0;
}

/* swaps values pointed to by a and b. Returns 0 on success, 1 on error.
 */
int swap(char *a, char *b)
{
    if (a == NULL || b == NULL)
    {
        return 1;
    }

    char temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}
