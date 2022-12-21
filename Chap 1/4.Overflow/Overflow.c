/* The best practice is to use printf formatter the same as the variable type. E.g:
 * %u for unsigned int
 * %uf for unsigned float
 * %ld for long int, etc
 *
 * Misuse of this, even though still print out the correct value, the variable still got overflowed
 * And cannot be used to operate with other variables anymore...
 */
#include<stdio.h>

int main()
{
    printf("Size of char: %lu bytes\n", sizeof(char));
    printf("Size of short int: %lu bytes\n", sizeof(short));
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of long int: %lu bytes\n", sizeof(long int));
    printf("Size of long long int (long long is the same as long in some 64-bit systems): %lu bytes\n\n", sizeof(long long));
    printf("If you need a specific integer size for a particular application, rather than trusting the compiler to pick the size you want:\n #include <stdint.h> (or <cstdint>)\n\n");

    int a = 2147483647;
    printf("So, we have an integer a = %d\n", a);
    a += 1;
    printf("Adding 1 to a to make it overflowed...\n");
    printf("The printed value of a in %%ld formatter: %ld\n", a);
    printf("The printed value of a in %%u formatter: %u\n\n", a);

    long int b = 5; /*The word 'int' can be omitted! */
    printf("We have a long integer b = %ld\n", b);
    b += a;
    printf("Adding a to b...\n");
    printf("The printed value of longint b after adding the overflowed a: %ld\n",b);
    return 0;
}
