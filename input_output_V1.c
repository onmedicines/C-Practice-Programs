/*copy input to output*/

#include<stdio.h>

void main()
{

int c;
c=getchar();
while(c!=EOF)
{
putchar(c);
c=getchar();
}

}