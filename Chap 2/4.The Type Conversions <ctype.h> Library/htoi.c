#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


unsigned long htoi(char s[]);
unsigned long power(int base, int exponent);

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("Please execute with an argument: ./a.out <type_your_string>\n");
        return 1;
    }

    char *s = malloc((strlen(argv[1]) + 1) * sizeof(char));

    /* You have to + 1 for the null terminator. The sizeof(char) could be
    omitted since C guarantee the size of a character is one byte in all platform*/

    strcpy(s, argv[1]);
    

    if (s[0] != '0' || (s[1] != 'x' && s[1] != 'X'))
    {
        printf("Please start your hexademical number with \'0x\' or \'0X\'\n");
        return 1;
    }

    printf("%lu\n", htoi(s));
    return 0;
}

unsigned long power(int base, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }

    int i;
    unsigned long res = base;

    for (i = 1; i < exponent; i++)
    {
        res *= base;
    }
    
    return res;
}

unsigned long htoi (char s[])
{
    int i, j, n;
    unsigned long res;
    n = -1;
    res = 0;

    for (i = 2; isxdigit(s[i]); i++)
    {
        n++;
    }

    for (j = 2; isxdigit(s[j]); j++)
    {
        if (isdigit(s[j])) {
            res = power(16,n--)*(s[j] - '0') + res;
        }
        else if (s[j] >= 'a' && s[j] <= 'f')
        {
            res = power(16,n--)*(s[j] - 'a' + 10) + res;
        }
        else if (s[j] >= 'A' && s[j] <= 'F')
        {
            res = power(16,n--)*(s[j] - 'A' + 10) + res;
        }
    }

    return res;
}
