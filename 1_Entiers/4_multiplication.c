#include <stdio.h>
#include <stdlib.h>
 
int 	main(void) {
	int		res = 0;
	int		i;

	for (i = 0 ; i < 16 ; i++)
		res = res + 73;
	printf("%d\n", res);
	return EXIT_SUCCESS;
}