#include<stdio.h>
#include<string.h>

int stlen(char*);

int main()
{
    printf("This program print the length of a string using two different method\n(a self-implemented version, and the strlen() built-in function from the <string.h> library!)\n\n");
    char heo[] = "Hello World";
    printf("The string \"%s\" has the length: %d %lu\n", heo, stlen(heo), strlen(heo));
    return 0;
}

int stlen(char s[])
{
    int i;
    i = 0;
    while(s[i] != '\0')
    {
        i++;
    }
    return i;
}
