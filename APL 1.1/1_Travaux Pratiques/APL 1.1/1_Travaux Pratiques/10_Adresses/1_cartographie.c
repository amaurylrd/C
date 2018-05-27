#include <stdio.h>
#include <stdlib.h>

int 	main() {
	float 					f;
	double 					d;
	long double 			ld;
	char 					c;
	short int 				hi;
	int 					i;
	long long unsigned int 	llui;

	printf("foat : %p\ndouble : %p\nlong double : %p\nchar : %p\nshort int : %d\nint : %d\nlong long unsigned int : %d\n", &f, &d, &ld, &c, &hi, &i, &llui);
	return EXIT_SUCCESS;
}
