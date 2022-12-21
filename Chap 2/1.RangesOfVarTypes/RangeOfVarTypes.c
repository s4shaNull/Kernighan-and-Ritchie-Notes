/* This program prints out the range of different types of variable.
 * Looking at the source code, we can also see the different type specifiers associated with different data types.
 * */

#include<stdio.h>
#include<limits.h>
#include<float.h>

int main()
{
    printf("Range of signed char:    %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("Range of signed short:   %hd to %hd\n", SHRT_MIN, SHRT_MAX);
    printf("Range of signed int:     %d to %d\n", INT_MIN, INT_MAX);
    printf("Range of signed long:    %ld to %ld\n\n", LONG_MIN, LONG_MAX);

    printf("Range of unsigned char:  %d to %u\n", 0, UCHAR_MAX);
    printf("Range of unsigned short: %d to %hu\n", 0, USHRT_MAX);
    printf("Range of unsigned int:   %d to %u\n", 0, UINT_MAX);
    printf("Range of unsigned long:  %d to %lu\n\n", 0, ULONG_MAX);

    printf("Range of float:          %f to %f\n", FLT_MIN, FLT_MAX);
    printf("Range of double:         %f to %f\n", DBL_MIN, DBL_MAX);
}
