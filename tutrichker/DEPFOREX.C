#include<stdio.h>
#include<conio.h>

#define LOWER 0
#define UPPER 200
#define STEP 20

int main()
{
int fahr;

clrscr();

for (fahr = LOWER; fahr <= UPPER; fahr+=STEP)
printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));

getch();
return 0;
}