/*program to replace two or more spaces in a string*/

#include <stdio.h>

void main()
{

    int nb = 0, nt = 0, nbs = 0;
    char c;
    while ((c = getchar()) != '\n')
    {
        if (c == '\\')
        {
            putchar('\\');
            putchar('\\');
        }
        else if (c == '\t')
        {
            putchar('\\');
            putchar('t');
        }
        else if (c == ' ')
        {
            putchar('\\');
            putchar('b');
        }
        else
            putchar(c);
    }
}