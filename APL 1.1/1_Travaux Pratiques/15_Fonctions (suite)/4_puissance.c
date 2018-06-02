#include <stdio.h>
#include <assert.h>

#define NDEBUG

int 	pui(int a) {
	int 	res;

	assert(a >= 4);
	res = a-1;
	while (res % 2 != 0) {
		res--;
	}
	assert(res < a);
	return res;
}

int 	main(void) {
	int 	a, t;

	printf("Entrez un R : ");
	t = scanf("%d", &a);
	getchar();
	if (t != 1) {
		fprintf(stderr, "Error ; Usage : <int>.\n");
		return EXIT_FAILURE;
	}
	printf("%d\n", pui(a));
	return EXIT_SUCCESS;
}
