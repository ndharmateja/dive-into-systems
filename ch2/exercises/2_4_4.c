// Ref: https://diveintosystems.org/exercises/section-2_4.html

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // 1) write code to declare a static array named static_array
    int size = 5;
    int static_array[size];

    // 2) write code to dynamically allocate an array named dynamic_array
    int *dynamic_array = (int *)malloc(sizeof(int) * size);

    // 3) initialize the values in both arrays to be [1,2,3,4,5]
    for (int i = 0; i < size; i++)
    {
        static_array[i] = i + 1;
        dynamic_array[i] = i + 1;
    }

    // 4) print the middle value of each array
    printf("middle of static array: %d\n", static_array[2]);
    printf("middle of dynamic array: %d\n", dynamic_array[2]);

    return 0;
}