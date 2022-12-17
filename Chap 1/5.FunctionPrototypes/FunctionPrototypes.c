#include <stdio.h>

void add (int, int);

int main()
{
    int a = 5;
    int b = 3;
    add(a,b);
}

void add(int a, int b)
{
    printf("Prototype in C, add function. See the source code for more details!\n");
    printf("Results: %d\n", a+b);
}
