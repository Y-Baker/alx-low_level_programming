#include <stdio.h>

int main()
{
    char *str = "Hello, Holberton";
    
    while (*str)
    {
        putchar(str[0]);
        str++;
    }
    putchar('\n');
}