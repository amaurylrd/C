#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool	isNumeric(char *str);

int 	main(void) {
	char 	str[16];

	printf("Entrez votre numero de securite sociale : ");
	fgets(str, sizeof(str), stdin);
	if (!(isNumeric(str))) {
	 	fprintf(stderr, "Verifiez vos valeurs.\n");
	 	return EXIT_FAILURE;
	}
	printf("date de naissance (mm/aa) : %c%c/%c%c\n", str[3], str[4], str[1], str[2]);
  	return EXIT_SUCCESS;
}

bool	isNumeric(char *str) {
	int		i;
	int 	cmp;

	cmp = 0;
	for (i = 0 ; str[i] ; i++) {
		if (str[i] < '0' || str[i] > '9' || str[3] > '1' || (str[3] == '1' && str[4] > '2'))
			cmp++;
	}
	if (i == 15)
		return cmp == 0 ? true : false;
	return false;
}