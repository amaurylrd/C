#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int 	main(void) {
	int     t, tmp;
    float   vAvion, vVent, d, res;

    printf("Entrez la vitesse de l'avion : ");
    t = scanf("%f", &vAvion);
    if (t != 1 || vAvion < 0.0f) {
        fprintf(stderr, "Verifiez votre valeur.\n");
        return EXIT_FAILURE;
    }
    printf("Entrez la vitesse du vent : ");
    t = scanf("%f", &vVent);
    if (t != 1) {
        fprintf(stderr, "Verifiez votre valeur.\n");
        return EXIT_FAILURE;
    }
    printf("Entrez la distance : ");
    t = scanf("%f", &d);
    if (t != 1 || d == 0.0f) {
        fprintf(stderr, "Verifiez votre valeur.\n");
        return EXIT_FAILURE;
    }
    res = (vAvion + vVent) / d;
    res *= 60.0f;
    tmp = 0;
    while (res > 60.0f) {
        res -= 60.0f;
        tmp++;
    }
    printf("duree de vol : %d:%2.0f\n", tmp, res);
  	return EXIT_SUCCESS;
}