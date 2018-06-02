#include <stdio.h>
#include <assert.h>
#include <string.h>

#define NDEBUG

char	deuxieme_1(char *str) {
	char	c;

	assert(strlen(str) >= 2);
	c = str[1];
	return c;
}

char	deuxieme_2(char *str) {

	char	c;
	assert(strlen(str) >= 2);
	c = str[1];
	return c;
}

int		main(int argc, char **argv) {
	int		i;

	if (argc <= 1) {
		fprintf(stderr, "Error ; Usage : %s <string> [<string> ... ].\n", argv[0]);
		return EXIT_FAILURE;
	}
	i = 1;
	printf("%d : %c\n", i, deuxieme_1(argv[1]));
	while (i < argc) {
		printf("%d : %c   ", i, deuxieme_2(argv[i]));
		i++;
	}
	putchar('\n');
	return EXIT_SUCCESS;
}