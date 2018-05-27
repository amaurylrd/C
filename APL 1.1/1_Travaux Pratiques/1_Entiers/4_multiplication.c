#include <stdio.h>
#include <stdlib.h>
 
int 	main(void) {
	int		res;
	int		i;

	res = 0;
	for (i = 0 ; i < 16 ; i++)
		res = res + 73;
	printf("%d\n", res);
	return EXIT_SUCCESS;
}