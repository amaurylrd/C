#include <stdio.h>
#include <stdlib.h>

int 	main(void) {
	int 	i, j, n, k;
	int		*mem = NULL;

	i = -1;
	j = 0;
	printf("Calcul de C(n, k) :\n");
	printf("Entrez n : ");
	scanf("%d", &n);
	while (n < 1) {
    	printf("n doit être supérieur ou égal à 1 !\n");
    	printf("Entrez n : ");
    	scanf("%d", &n);
  	}
  	printf("Entrez k : ");
  	scanf("%d", &k);
  	while (k > n || k < 1) {
    	printf("k doit être compris entre 1 et %d !\n", n);
    	printf("Entrez k : ");
    	scanf("%d", &k);
  	}
  	mem = (int *)malloc(n * sizeof(int));
  	while (i < n) {
    	if (j < 1)
      		*(mem + (j = i++) + 1) = 1;
    	else
      		*(mem + j--) += *(mem + j);
    }
  	printf("C(%d, %d) = %d\n", n, k, mem[k-1]);
  	free(mem);
  	return EXIT_SUCCESS;
}