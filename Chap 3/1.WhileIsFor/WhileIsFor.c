#include<stdio.h>

int main()
{
    /* The for statement:
     *  for (expr1; expr2; expr3)
     *      statement
     * 
     * is equivalent to
     *  expr1;
     *  while (expr2)
     *  {
     *      statement
     *      expr3;
     *  }
     *
     */

    printf("An infinite for loop:\n");
    
    for(;;)
        printf("Loop!\n");
}
