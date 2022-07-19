/*program to print faherenite-celcius table
for fahr=0, 20, 40, ..., 300*/

#include<stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

void main()
{

printf("\n-------------------");
printf("\nTemperature table:\n\n");
int fahe;
for(fahe=UPPER;fahe>=LOWER;fahe-=STEP)
{
printf("%3d\t%5.1f\n", fahe, (float)5*(fahe-32)/9);
}
 
}
