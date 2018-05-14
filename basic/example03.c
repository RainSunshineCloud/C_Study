#include <stdio.h>
#include <math.h>

void main()
{
    float res = 0,i = 1,j = 1;
    for (i = 1; ;i += 2) {
        res += j/i;

        if ( 10000/i < 1) {
            printf("%1.5f",res * 4);
            return;
        }

        j = -j;
    }

}
