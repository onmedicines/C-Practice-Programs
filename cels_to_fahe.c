#include<stdio.h>

void main()
{

float cels;
printf("\n------------------");
printf("\nTemperature table:\n");
for(cels=-10;cels<=10;cels++)
{
printf("%3.0f\t%6.1f\n", cels, (9.0*cels/5.0)+32);
}

}