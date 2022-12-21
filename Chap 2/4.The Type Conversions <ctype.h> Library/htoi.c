#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


unsigned long htoi(char s[]);
unsigned long power(int base, int exponent);

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("Please execute with an argument: ./a.out <type_your_string>\n");
        return 1;
    }

    /* You have to + 1 for the null terminator. The sizeof(char) could be
    omitted since C guarantee the size of a character is one byte in all platform*/
    char *s = malloc((strlen(argv[1]) + 1) * sizeof(char));
    strcpy(s, argv[1]);
    

    if (s[0] != '0' || tolower(s[1] != 'x'))
    {
        printf("Please start your hexademical number with \'0x\' or \'0X\'\n");
        return 1;
    }

    printf("%lu\n", htoi(s));
    return 0;
}

unsigned long htoi (char s[])
{
    int j;
    char c;
    unsigned long res;
    res = 0;

    for (j = 2; isxdigit(s[j]); j++)
    {
        if (isdigit(s[j])) {
            res = res*16 + (s[j] - '0');
        }
        else if ((c = tolower(s[j])) >= 'a' && c <= 'f')
        {
            res = res*16 + c - 'a' + 10;
        }
    }
    return res;
}
