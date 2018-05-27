#include <stdio.h>
#include <stdlib.h>

int   main(void) {
    char                  a = 77;
    unsigned char         b = 77;
    short                 c = 77;
    unsigned short        d = 77;
    int                   e = 77;
    unsigned int          f = 77U;
    long                  g = 77;
    unsigned long         h = 77UL;
    long long             i = 77LL;
    unsigned long long    j = 77ULL;
    float                 k = 77.0;
    double                l = 77.0;
    long double           m = 77.0;

    printf("char %d\n unsigned char %hhu\n short %hd\n unsigned short %hu\n int %d\n unsigned int %u\n long %ld\n unsigned long %lu\n long long %lld\n unsigned long long %llu\n float %f\n double %lf\n long double %Lu\n", a, b, c, d, e, f, g, f, i, j, k, l, m);
    return EXIT_SUCCESS;
}
