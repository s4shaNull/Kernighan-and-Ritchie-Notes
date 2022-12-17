/* The quantities LOWER, UPPER and STEP are symolic constants, not variables
 * They do not appear in declaration
 * Symbolic constant names are conventionally written in upper case so that
 * they can be readily distinguished from lower case variable names
 *
 * There is no semicolon at the end of a #define line
 */

#include<stdio.h>

#define LOWER 0     
#define UPPER 300
#define STEP 20

int main()
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    {
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
}

