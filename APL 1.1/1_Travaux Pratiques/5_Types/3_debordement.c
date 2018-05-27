#include <stdio.h>
#include <stdlib.h>

int 	main(void) {
	int 	x;
  	char	c;

  	printf("Entrez un entier : ");
  	scanf("%d", &x);
  	c = (char) x;
  	printf("%d\n", c);
  	return EXIT_SUCCESS;
}
