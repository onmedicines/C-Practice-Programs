/*program to replace two or more spaces in a string*/

#include <stdio.h>

void main()
{

    int nb = 0;
    char c;
    while ((c = getchar()) != '\n')
    {
        if (c == ' ')
            nb++;
        else if (nb > 0)
        {
            putchar(' ');
            putchar(c);
            nb = 0;
        }
        else
            putchar(c);
    }
}