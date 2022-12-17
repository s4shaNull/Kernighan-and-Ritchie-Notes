/* This program demonstrate the use of the external variable (an equivalence of global var in Python)
 * In this demo, since we declare the variable in a header file, we have to include the "extern" keyword
 * each time we declare the variable "a" in the functions below.
 *
 * The external variable will not be affected by the scope rule. Only the local varialbe will be, because of the
 * pass-by-value policy of C.
 */
#include<stdio.h>

/*To include your header file, you use the "quotes" instead of the diamond bracket <>
 */

#include "ExternalVariables.h"

void function1();
void function2();

int main()
{
    extern int a;
    printf("Value of extern int a: %d\n\n", a);
    printf("Calling function1()\n");
    function1();
    printf("Calling function2()\n");
    function2();
    printf("Back to main! Value of extern int a after calling: %d\n",a);
}

void function1()
{
    extern int a;
    a -= 1;
    printf("Value of a is %d\n\n", a);
}

void function2()
{
    extern int a;
    a *= 3;
    printf("Value of a is %d\n\n", a);
}
