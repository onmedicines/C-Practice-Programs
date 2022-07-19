#include<stdio.h>

void main()
{

int nb=0, nt=0, nl=0;
char c;
while((c=getchar())!=EOF)
{
if(c=='\t')
nt++;
else if(c==' ')
nb++;
else if(c=='\n')
nl++;
}
printf("\nnumber of blanks:%d\nnumber of tabs:%d\nnumber of lines:%d", nb,nt,nl);

}