#include <stdio.h>
#include <stdlib.h>
 
int 	main(void) {
	char 	c[] = {'s', 'a', 'l', 'u','t'};
	int 	i;

	for (i = 0 ; i < 5 ; i++)
		printf("%c", c[i]);
	putchar('\n');
	return EXIT_SUCCESS;
}