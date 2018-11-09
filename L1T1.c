//Lab 2 Attempt 2
#include<stdio.h>
#include<conio.h>

int main()
{
//Declaring the variables
short i1;
unsigned short i2;
long l1;
unsigned long l2;

//Same thing, but with physical variables
float f1;
float f2;
double d1;
long double d2;

//Another same thing but with symbols
char c1,c2;

//First function - clear screen
clrscr();

//Reading and printing the first variable
printf("short int\t");
scanf("%hd",&i1);
printf("%hd\n",i1);

//ETC
printf("unsigned short int\t");
scanf("%hu",&i2);
printf("%hu\n",i2);

printf("signed long int\t");
scanf("%ld",&l1);
printf("%ld\n",l1);

printf("unsigned long int\t");
scanf("%lu",&l2);
printf("%lu\n",l2);

//Same thing with physical variables
printf("float\t");
scanf("%f",&f1);
printf("%.2f\n",f1);

printf("float\t");
scanf("%e",&f2);
printf("%e\n",f2);

printf("double\t");
scanf("%lf",&d1);
printf("%.8lf\n",d1);

printf("long double\t");
scanf("%le",&d2);
printf("%.12le\n",d2);

printf("char\t");
scanf("%*c%c",&c1);
printf("%c\n",c1);

printf("char\t");
scanf("%*c%c",&c2);
printf("%c\n",c2);


getch();
return 0;
}
