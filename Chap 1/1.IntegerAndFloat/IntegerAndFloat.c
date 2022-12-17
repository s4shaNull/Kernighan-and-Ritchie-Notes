/* ops = + - * / or anything
 * Integer ops Integer = Integer
 * Float   ops Integer = Float
 * Integer ops Float   = Float
 */

#include<stdio.h>

int main()
{
    printf("5/9 = %d\n", 5/9);
    printf("5.0/9.0 = %f\n", 5.0/9.0);

    printf("5*4/9 = %d\n", 5*4/9);
    printf("(5+14.0)/9 = %f\n", (5+14.0)/9);

}
