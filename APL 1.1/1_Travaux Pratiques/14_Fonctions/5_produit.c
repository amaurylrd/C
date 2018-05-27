#include <stdio.h>
#include <stdlib.h>

int 	test(char* str);

int 	main(int argc, char **argv) {
	if (argc != 3) {
		printf("Usage : %s <integer> <integer>.\n", argv[0]);
		return EXIT_FAILURE;
	}
	if (test(argv[2]) == 1 || test(argv[1]) == 1) {
		printf("Usage : %s <0-9> <0-9>.\n", argv[0]);
		return EXIT_FAILURE;	
	}
	printf("%d\n", atoi(argv[2])*atoi(argv[1]));
	return EXIT_SUCCESS;
}

int 	test(char* str) {
	while (str*)
		if (str* < '0' || str* > '9')
			return 1;
	return 0;
}
