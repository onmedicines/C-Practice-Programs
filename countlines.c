#include <stdio.h>

void main()
{

int c, nl=0;

while((c=getchar())!=EOF)
{
if(c=='\n')
nl++;
}

printf("\n%d", nl);

}