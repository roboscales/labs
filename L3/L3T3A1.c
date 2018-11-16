#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define a -1
#define r -5

int main()
{
    int n;

    float x, y;

    printf("Enter x:\n");
    scanf("%f", &x);

    printf("Enter y:\n");
    scanf("%f", &y);

    if ((x <= 0) && (y <= 0))
    {

     if ((x * x + y * y) < r * r )
     {
         if (x == 0) printf("This point located on Y axis in sector 1");
            else if (y < a * x * x)
            {
               n = 1;
               printf("Point located in sector %d", n);
            }

         if (y == 0) printf("This point located on X axis in sector 2");
            else if (y > a * x * x)
            {
                n = 2;
                printf("Point located in sector %d", n);
            }
          else printf("This point is located on parabola between sectors 1 and 2");
      }

     else if ((x * x + y * y) > r * r)
     {
        if (x == 0) printf("This point located on Y axis in sector 3", n);
            else if (y < a * x * x)
            {
                n = 3;
                printf("This point located in sector %d", n);
            }

        if (y == 0) printf("This point located on X axis in sector 4");
         else if (y > a * x * x)
         {
            n = 4;
            printf("Point located in sector %d", n);
         }
         else printf("This point is located on parabola between sector 2 and 4");

         }
       else if ((x * x + y * y) == r * r)
       {
           if (y > a * x * x) printf("This point located on circle between sector 2 and 4");
           else if (y < a * x * x) printf("This point is located between sector 1 and 3");
       }

       else printf("This point is located on crossing of circle and parabola");


     }


    else if((x == 0) && (y == 0)) printf("This point located in start of coordinate system.");


    else printf("Enter another argument! This point is not exists in this area.");



    return 0;
}
