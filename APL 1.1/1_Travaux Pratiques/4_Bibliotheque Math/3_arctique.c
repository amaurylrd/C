#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int 	main(void) {
	int     t;
    float   fst, snd;

    printf("Saisir des coordonnees polaires r-t : ");
    t = scanf("%f-%f", &fst, &snd);
    if (t != 2) {
        fprintf(stderr, "Verifiez votre valeur.\n");
        return EXIT_FAILURE;
    }
    printf("Les coordonnees cartesiennes sont %5.2f-%5.2f\n", fst*cosf(t), fst*sinf(t));
  	return EXIT_SUCCESS;
}