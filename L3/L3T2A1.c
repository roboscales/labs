#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{
    float x, f;

    printf("Enter x:\n");
    scanf("%f",&x);

    f = (0 < x) && (x <= (M_PI/2)) ? 1 + tan(x) : ((M_PI/2) < x) && (x < M_PI) ? sin(x) : ( x >= M_PI) && ((M_PI * 2) > x) ? pow(1 - cos(x), 1./3) : printf("null");

    printf("%.2f",f);

    return 0;
}
