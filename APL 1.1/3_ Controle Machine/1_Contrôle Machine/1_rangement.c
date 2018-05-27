#include <stdio.h>
#include <stdlib.h>

int 	main(void) {
	unsigned long	ul;
	int				hex;
	double			d;
	char			c;
	
	ul = 6UL;
	hex = 0x6;
	d = 6.0;
	c = '\66';
	printf(". %lu\n. %d\n. %1.f\n. %c\n", ul, hex, d, c);
	return EXIT_SUCCESS;
}