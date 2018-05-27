#include <stdio.h>
#include <stdlib.h>

int 	main(int argc, char **argv) {
	int 	i;

	for (i = 0 ; i < argc ; i++)
		printf("argument %d : %c\n", i, argv[i][0]);
	return EXIT_SUCCESS;
}