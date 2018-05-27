#include <stdio.h>
#include <stdlib.h>

int 	main(int argc, char **argv) {
	int 	a, b, c;

	if (argc != 3) {
		fprintf(stderr, "Error : Usage <int> <int>.\n");
		return EXIT_FAILURE;
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("A = %d et B = %d\n", a, b); 
	c = a;
	a = b;
	b = c;
	printf("A = %d et B = %d\n", a, b);
	return EXIT_SUCCESS;
}
