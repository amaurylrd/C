#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

void	request(int* nb, bool* win);

int 	main(void) {
	int				i;
	unsigned int 	nb;
	bool			win = false;

	srand(time(NULL));
	nb = (rand() % 101);
	for (i = 0 ; i < 6 ; i++)
		if (!win)
			request(&nb, &win);
	if (!win)
		printf("Dommage !!\n");
	else 
		printf("BINGO !!\n");
	printf("La reponse etait %u\n", nb);
	return EXIT_SUCCESS;
}

void	request(int* nb, bool* win) {
	int 			t;
	unsigned int 	a;

	printf("Guess my age [0-100] : ");
	t = scanf("%u", &a);
	if (t != 1) {
		fprintf(stderr, "Verifiez votre valeurs.\n");
		exit (1);
	}
	if (a > *nb)
		printf("-\n");
	else if (a < *nb)
		printf("+\n");
	if (a == *nb)
		*win = true;
}