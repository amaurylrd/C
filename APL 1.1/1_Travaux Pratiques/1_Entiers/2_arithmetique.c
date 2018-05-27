#include <stdio.h>
#include <stdlib.h>
 
int     main(void) {
    printf("%d", 100/6);
    printf("%s", "\n");
    printf("%d", 100%6);
    printf("%s", "\n");
    printf("%d", 0x1A*015);
    printf("%s", "\n");
    printf("%d", -3/5);
    printf("%s", "\n");
    printf("%d", -31/5);
    printf("%s", "\n");
    printf("%d", -31%5);
    printf("%s", "\n");
    printf("%d", 100*(3/5));
    printf("%s", "\n");
    printf("%d", 100*3/5);
    printf("%s", "\n");
    printf("%d", 2-3-5);
    printf("%s", "\n");
    printf("%d", 2-(3-5));
    printf("%s", "\n");
    return EXIT_SUCCESS;
}