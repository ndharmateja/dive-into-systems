#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x;
    float pi;

    // read in an int value followed by a float value ("%d%g")
    // store the int value at the memory location of x (&x)
    // store the float value at the memory location of pi (&pi)
    scanf("%d%g", &x, &pi);
    printf("x: %d, pi: %g\n", x, pi);
}
