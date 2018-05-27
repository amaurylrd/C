#include <stdio.h>
#include <stdlib.h>

void	abc_parse(char c);

int 	main(void) {
	abc_parse('Z');
	abc_parse('z');
	return EXIT_SUCCESS;
}

void	abc_parse(char c) {
	int i;

	for (i = 0 ; i < 26 ; i++)
		printf("%c ", c-1*i);
	putchar('\n');
}