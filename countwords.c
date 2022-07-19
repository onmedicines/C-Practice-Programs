/*count no. of characters, words and lines in the input.*/

#include <stdio.h>

void main()
{
    int nc = 0, nw = 0, nl = 0;
    int c;
    while ((c = getchar()) != EOF)
    {
        nc++;
        if (c == ' ' || c == '\t')
        {
            nw++;
        }
        else if (c == '\n')
        {
            nw++;
            nl++;
        }
    }
    printf("\nThe input string has %d lines, %d words, %d characters.", nl, nw, nc);
}