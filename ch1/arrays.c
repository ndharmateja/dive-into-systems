#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*
        The C compiler is happy to compile code that accesses array positions beyond the bounds of the array; there is no bounds checking by the compiler or at runtime. As a result, running this code can lead to unexpected program behavior (and the behavior might differ from run to run). It can lead to your program crashing, it can change another variable’s value, or it might have no effect on your program’s behavior. In other words, this situation leads to a program bug that might or might not show up as unexpected program behavior. Thus, as a C programmer, it’s up to you to ensure that your array accesses refer to valid positions!
    */
    int arr[3] = {0, 1, 2};
    printf("%d\n", arr[4]);
}
