#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int 	main(void) {
	int     t, i;
    float   fst, snd;
    float   tab[4];

    for (i = 0 ; i < 2 ; i++) {
        printf("Saisir un point X-Y : ");
        t = scanf("%f-%f", &fst, &snd);
        printf("%f %f\n", fst, snd);
        if (t != 2) {
            fprintf(stderr, "Verifiez votre valeur.\n");
            return EXIT_FAILURE;
        }
        tab[i+i] = fst;
        tab[i+i+1] = snd;
    }
    fst = sqrtf(powf(tab[2] - tab[0], 2.0f) + (powf(tab[3] - tab[1], 2.0f))); 
  	printf("La distance est %5.2f\n", fst);
  	return EXIT_SUCCESS;
}