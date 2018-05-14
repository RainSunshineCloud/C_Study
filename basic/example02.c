#include <stdio.h>

main ()
{
    int i = 0,j = 1;

    for (;;i++) {
        j = 11 * i + 10;
        if (j % 5 == 1 && j % 6 == 5 && j % 7 == 4) {
              printf("%d",j);
              break;
        }
    }
}