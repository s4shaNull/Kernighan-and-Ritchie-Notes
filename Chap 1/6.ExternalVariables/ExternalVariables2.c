/* If we declare the external variable "a" outside functions, we can ommit the use of the "extern" keyword
 * and the declarations of "a
 * 
 * However, other files cannot use the "a" variable.
 */
#include<stdio.h>

void function1();
void function2();

int a = 5;

int main()
{
    printf("Value of extern int a: %d\n\n", a);
    printf("Calling function1()\n");
    function1();
    printf("Calling function2()\n");
    function2();
    printf("Back to main! Value of extern int a after calling: %d\n",a);
}

void function1()
{
    a -= 1;
    printf("Value of a is %d\n\n", a);
}

void function2()
{
    a *= 3;
    printf("Value of a is %d\n\n", a);
}
