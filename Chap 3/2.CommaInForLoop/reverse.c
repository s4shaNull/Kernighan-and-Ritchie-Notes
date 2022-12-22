#include <stdio.h>
#include <string.h>

void reverse (char s[]);


int main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("%s <string_need_reverse>\n", argv[0]);
        return 1;
    }
    printf("This program use comma operators to execute multiple expression in a for statement.\n");

    reverse(argv[1]);
    printf("Reversed: %s\n", argv[1]);

    return 0;
}

void reverse (char s[])
{
    int c, i, j;

    for (i = 0, j = strlen(s)-1; i<j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}
