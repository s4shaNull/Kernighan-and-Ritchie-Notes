/* The precedence "!=" is higher than that of "=".
 * Which means that in the absence of parentheses (line 11), the relational test != would be done before the
 * assignment.
 * 
 * This has the undesired effect of setting c to 0 (if we input Ctrl+D) or 1 (if we input anything else)
 */

#include<stdio.h>

int main()
{
    int c;
    c = getchar() != EOF;
    printf("c = getchar() != EOF = %d\n\n", c);

    printf("The correct use:\n");
    while ((c=getchar()) != EOF)
        putchar(c);
}
