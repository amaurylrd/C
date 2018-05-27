#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void 	input(int tab[]);
void 	output(int tab[]);

int 	main(void) {
	int 	tab[10];
	
	input(tab);
	output(tab);
	return EXIT_SUCCESS;
}

void	input(int tab[]) {
	int 	i;

	srand(time(NULL));
	for (i = 0 ; i < 10 ; i++) {
		tab[i] = (rand() % 100 - 50);
		printf("%3.d ", tab[i]);
	}
	putchar('\n');
}

void 	output(int tab[]) {
     int 	i;

	for (i = 9 ; i >= 0 ; i--)
		printf("%3.d ", tab[i]);
	putchar('\n');
}

