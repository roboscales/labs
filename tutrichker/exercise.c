#include<stdio.h>

int main()
{
    float fahr, cel;
    int lower, upper, step;

    lower = 0;
    upper = 500;
    step = 20;

    cel = lower;

    while (cel <= upper)
    {
        fahr = 32 + cel * (5.0/9.0);
        printf("%-4.0f %6.1f",cel, fahr);
        cel += step;
    }
    return 0;
}
