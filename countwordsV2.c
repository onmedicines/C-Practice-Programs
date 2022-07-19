#include <stdio.h>

#define IN 1
#define OUT 0

void main()
{
    int c, nc, nw, nl, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }

    printf("\nThe input string has %d lines, %d words, %d characters.", nl, nw, nc);
}