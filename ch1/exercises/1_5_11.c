// Ref: https://diveintosystems.org/exercises/section-1_5.html

#include <stdio.h>
#include <string.h>

void string_copy(char destination[], char source[])
{
    // We can use the do-while here because we need to copy the
    // null terminator as well
    int i = 0;
    do
    {
        destination[i] = source[i];
        i++;
    } while (source[i] != '\0');
}

int main(void)
{
    char dest[50];

    // Test Case 1: Copy a normal string.
    printf("Case 1\n");
    strcpy(dest, "Hello, World!");
    printf("strcpy output.    : '%s'\n", dest);
    string_copy(dest, "Hello, World!");
    printf("string_copy output: '%s'\n\n", dest);

    // Test Case 2: Copy an empty string.
    printf("Case 2\n");
    strcpy(dest, "");
    printf("strcpy output.    : '%s'\n", dest);
    string_copy(dest, "");
    printf("string_copy output: '%s'\n\n", dest);

    // Test Case 3: Copy a single character string.
    printf("Case 3\n");
    strcpy(dest, "A");
    printf("strcpy output.    : '%s'\n", dest);
    string_copy(dest, "A");
    printf("string_copy output: '%s'\n\n", dest);

    // Test Case 4: Copy a string that fits exactly into the destination buffer.
    char dest4[11];
    printf("Case 4\n");
    strcpy(dest4, "1234567890");
    printf("strcpy output.    : '%s'\n", dest4);
    string_copy(dest4, "1234567890");
    printf("string_copy output: '%s'\n\n", dest4);

    // Test Case 5: Copy a very long string.
    char long_src[101];
    char long_dest[101];
    memset(long_src, 'a', 100);
    long_src[100] = '\0';

    printf("Case 5\n");
    strcpy(long_dest, long_src);
    printf("strcpy output.    : '%s'\n", long_dest);
    string_copy(long_dest, long_src);
    printf("string_copy output: '%s'\n\n", long_dest);

    // Test Case 6: Copy a string with special characters.
    printf("Case 6\n");
    strcpy(dest, "Hello\nWorld\t!");
    printf("strcpy output.    : '%s'\n", dest);
    string_copy(dest, "Hello\nWorld\t!");
    printf("string_copy output: '%s'\n\n", dest);

    return 0;
}