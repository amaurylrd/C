#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int 	t;
	int		cmp[3] = {0, 0, 0};
	float 	f;

	printf("combien le client a paye : ");
	t = scanf("%f", &f);
    if (t != 1 || f <= 5.48) {
        fprintf(stderr, "Verifiez votre valeur.\n");
        return EXIT_FAILURE;
    }   
    f -= 5.49;
    while (f >= 2.0) {    
    	f -= 2.0;
    	cmp[0]++;
    }
    while (f >= 0.2) {
    	f -= 0.2;
    	cmp[1]++;
    }
    while (f > 0.0) {
        f -= 0.01;
        cmp[2]++;
    }
	printf("Il faut rendre :\n%d pieces de 2\n%d pieces de 0.20\n%d pieces de 0.01\n", cmp[0], cmp[1], cmp[2]);
}
