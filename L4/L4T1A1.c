#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned short a, i, k, k_min = 10, i_min;


    printf("Enter the natural number:\n");
    scanf("%d", &a);

    for (i = 0; ;i++)
    {
        if(a == 0)
            break;

        k = a % 10;
        if (k < k_min)
        {
            k_min = k;
            i_min = i;
        }

        a = a / 10;
    }

    printf("Number of digital: %d", i_min + 1);

    return 0;
}
