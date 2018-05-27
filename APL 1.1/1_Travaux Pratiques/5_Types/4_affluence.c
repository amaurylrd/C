#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	int 	semaine[5];
	int 	i;
	float	res;

	if (argc != 6) {
		fprintf(stderr, "Usage : %s <lundi> <mardi> <mercredi> <jeudi> <vendredi>\n", argv[0]);
		return EXIT_FAILURE;
	}
	res = 0;
	for (i  = 0 ; i < 5 ; i++) {
		semaine[i] = strtol(argv[i+1], NULL, 10);
		res += (float) semaine[i];
	}
	res /= 5.0;
	printf("La moyenne de la semaine est : %.2f\n", res);
}
