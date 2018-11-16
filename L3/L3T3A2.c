#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;

    float x, y, r, a;

    printf("Enter radius:\n");
    scanf("%f",&r);

    printf("Enter factor of parabola:\n");
    scanf("%f",&a);

    printf("Enter x:\n");
    scanf("%f", &x);

    printf("Enter y:\n");
    scanf("%f", &y);

    if (((x <= 0) && (y <= 0)) && ((r <= 0) && (a <= 0)))
    {

     if ((pow(x, 2) + y * y) < (r * r) )
     {
         if (x == 0) printf("This point located on Y axis in sector 1");
            else if (y < (a * pow(x, 2)))
            {
               n = 1;
               printf("Point located in sector %d", n);
            }

         if (y == 0) printf("This point located on X axis in sector 2");
            else if (y > (a * pow(x, 2)))
            {
                n = 2;
                printf("Point located in sector %d", n);
            }
          else printf("This point is located on parabola between sectors 1 and 2");
      }

     else if ((pow(x, 2) + y * y) > (r * r))
     {
        if (x == 0) printf("This point located on Y axis in sector 3", n);
            else if (y < (a * pow(x, 2)))
            {
                n = 3;
                printf("This point located in sector %d", n);
            }

        if (y == 0) printf("This point located on X axis in sector 4");
         else if (y > (a * pow(x, 2)))
         {
            n = 4;
            printf("Point located in sector %d", n);
         }

         else printf("This point is located on parabola between sector 2 and 4");

         }
       else if ((pow(x, 2) + y * y) == (r * r))
       {
           if (y > (a * pow(x, 2))) printf("This point located on circle between sector 2 and 4");
           else if (y < (a * pow(x, 2))) printf("This point is located between sector 1 and 3");
       }

       else printf("This point is located on crossing of circle and parabola");


     }


    else if((x == 0) && (y == 0)) printf("This point located in start of coordinate system.");


    else printf("Enter another argument! This point, radius and factor are not exists in this area.");



    return 0;
}
