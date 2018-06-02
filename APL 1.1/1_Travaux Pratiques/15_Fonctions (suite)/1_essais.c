#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define NDEBUG

/**
 *  Génère une valeur aléatoire dans un intervalle.
 *
 *  Précondition : l'argument min est plus petit que l'argument max.
 *  Postcondition : le résultat est dans l'intervalle [min ; max[.
 */
int		rng(int min, int max) {
	int 	res;

	assert(min < max);
	res = min + rand()%(max + 1 - min);
	assert((min <= res) && (res < max));
	return res;
}

int		main(int argc, char **argv) {
	if (argc != 3) {
		fprintf(stderr, "Error ; Ussage : %s <int> <int>.\n", argv[0]);
		return EXIT_FAILURE;
	}
	if (atoi(argv[1]) > atoi(argv[2])) {
		fprintf(stderr, "Error ; Ussage : %s <min> <MAX>.\n", argv[0]);
		return EXIT_FAILURE;
	}
	printf("%d\n", rng(atoi(argv[1]), atoi(argv[2])));
	return EXIT_SUCCESS;
}
