#include <stdio.h>
#include <stdlib.h>

int 	cmp2e(char *str);
int 	testc(char *str);

int 	main(int argc, char **argv) {
	if (argc != 2) {
		fprintf(stderr, "Verifiez le nb d'arguments.\n");
		return EXIT_FAILURE;
	}
	printf("La string contient %d 'e'\n", cmp2e(argv[1]));
	printf("Nombre de char différents : %d\n", testc(argv[1])); 
	return EXIT_SUCCESS;
}

int 	cmp2e(char *str) {
	int 	cmp;

	cmp = 0;
	while (*str) {
		if (*str == 'e')
			cmp++;
		str++;
	}
	return cmp;
}

int 	testc(char *str) {
	int 	cmp;
	int 	i;
	int 	j;

	j = 0;
	cmp = 0;
	while (str[j]) {
		i = 0;
		if (str[j] != str[i])
			i++;
		if (i == j)
			cmp++;
		j++;		
	}
	return cmp;
}
