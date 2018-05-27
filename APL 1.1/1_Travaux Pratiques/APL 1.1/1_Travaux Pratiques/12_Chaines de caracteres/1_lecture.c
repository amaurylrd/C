#include <stdio.h>
#include <string.h>

int 	main(void) {
	char 	c;
	int 	cmp;
	int 	i;

	cmp = 0;
	printf("Entrez un mdp : ");
	for (i = 0 ; i <= 25 ; i++) {
		c = getchar();
		if (c == '\n')
			i = 25;
		cmp++;
	}
	if (cmp <= 25)
		printf("Reussite !!\n");
	else
		printf("Echec !\n");
	return  EXIT_SUCCESS;
}
