#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>

#define NDEBUG

int		logarithme(double x) {
	double		res;
	
	assert(x > 0);
	res = log(x);
//	assert(x <= 2147483647 && x >= –2147483648);
	return (res);
}

int		main(void) {
	double		a;
	int			t;

	printf("Entrez un R+ : ");
	t = scanf("%lf", &a);
	if (t != 1) {
		fprintf(stderr, "Error ; Usage : <int>.\n");
		return EXIT_FAILURE;
	}
	printf("%.4f\n", log(a));
	return EXIT_SUCCESS;
}
