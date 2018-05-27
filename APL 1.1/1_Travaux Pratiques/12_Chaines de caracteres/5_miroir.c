#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int 	main(int argc, char **argv) {
	int 	i, j;

	for (j = argc-1 ; j >= 0 ; j--) {
		for(i = strlen(argv[j]) ; i >= 0 ; i--)
			printf("%c", argv[j][i]);
		putchar(' ');
	}	
	putchar('\n');
	return EXIT_SUCCESS;
}
