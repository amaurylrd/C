#include <stdio.h>
#include <stdlib.h>
 
int     main(void) {
    int 	n = 1431655765;

    for (int i = 1 ; i < 32 ; i++)
        printf("%d", (n>>i)&1);
    printf("%d\n", n&1);
    return EXIT_SUCCESS;
}