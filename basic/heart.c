#include <stdio.h>

main ()
{
    float x,y,temp;

    for (y = 1.5; y >= -1.5; y -= 0.1) {
        for (x = -1.5; x <= 1.5; x += 0.05) {
            temp = x*x + y*y - 1;
            if (temp * temp * temp - x*x*y*y*y >= 0.001) {
                printf("*");
            } else {
                printf(" ");
            }

        }
        printf("\n");
    }
}
