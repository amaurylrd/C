#include <stdio.h>
#include <stdlib.h>

int   main(void) {
    short int   a = 10000;
    int         b = 40000;
    float       x = 1000.0f, y = 0.001f, z;
 
    a = a + 30000;
    z = x + y;
    z = z - x;
    printf("%s", "Premier test : ");
    if (a == b)
        printf("%s", "OK\n");
    else
        printf("%s", "????\n");
    printf("%s", "Deuxième test : ");
    if (z == y)
        printf("%s", "OK\n");
    else
        printf("%s", "????\n");
  return EXIT_SUCCESS;
}