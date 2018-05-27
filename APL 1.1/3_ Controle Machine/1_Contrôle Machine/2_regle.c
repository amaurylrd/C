#include <stdio.h>
#include <stdlib.h>

int 	main(int argc, char **argv) {
	int 	i, a;
	
	if (argc != 2) {
		printf("Verifiez les arguments.\n");
		return EXIT_FAILURE;
	}
	a = atoi(argv[1]);
	if (a <= 0) {
		printf("Verifiez les arguments.\n");
		return EXIT_FAILURE;
	}
	putchar('|');
	for (i = 0 ; i < a && a > 0 ; i++)
		printf("''''|''''|");
	putchar('\n');
	for (i = 0 ; i <= a ; i++)
		printf("%d         ", i);
	putchar('\n');
	return EXIT_SUCCESS;
}