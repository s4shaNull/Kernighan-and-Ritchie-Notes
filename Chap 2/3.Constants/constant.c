#include <stdio.h>

/* The following lines demonstrate how to add suffix for constants correctly (also applied for symbolic constants) */
const long A = 12345L;
const unsigned int B = 12345U;
const unsigned long C = 12345UL;
const float D = 12345.2F;
const double E = 12345.2L;

/* Character constants: */
const char F = 'x'; /* char 'x' is different from string "x" since string "x" is an array with the first element = 'x', and ends with '\0' */
const char BELL = '\007';
const char VTAB = '\xb';

/* enum! */
enum week {Mon = 2, Tue, Wed, Thur, Fri, Sat, Sun};

int main()
{
    printf("%ld %u %lu %f %f\n", A,B,C,D,E);
    printf("%c %c %c\n", F, BELL, VTAB);
    enum week day;
    day = Wed;
    printf("%d\n", day);

    return 0;
}
