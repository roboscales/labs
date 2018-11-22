#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned short a, k, i = 0, n = 0;


    printf("Enter the natural number:\n");
    scanf("%d", &a);

    do
    {
        k = a % 10;

        i++;

        if(k <= 1 && k >= 0) n++;

        a = a / 10;
    }
    while(a != 0);

    if (n == 0) printf("Your number not contain 0 and 1");
    else printf("Your number contains 0 and 1");

    //printf("%d %d", i, n);

    return 0;
}
