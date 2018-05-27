#include <stdio.h>
#include <stdlib.h>

int 	main() {
	int 	a, b, c, t;

	printf("Entrez trois entiers naturels (a:b:c) : ");
	t = scanf("%d:%d:%d", &a, &b, &c);
	if (t != 3) {
		printf("Verifier votre valeur.\n");
		return EXIT_FAILURE;
	}
	printf("Ordre croissant : ");
	if (b == c && a == b && c == a) {
		printf("%d = %d = %d\n", b, a, c);
		return EXIT_SUCCESS;
	}
	if (a == b || b == c || c == a) {
		if (a == b) {
			if (b > c)
				printf("%d > %d\n", b, c);
			else
				printf("%d > %d\n", c, b);
		}
		if (a == c) {
			if (c > b)
				printf("%d > %d\n", c, b);
			else
				printf("%d > %d\n", b, c);
		}
		if (b == c) {
			if	(b > a)
				printf("%d > %d\n", b, a);
			else
				printf("%d > %d\n", a, b);
		}
		return EXIT_SUCCESS;
	}
	else if (a > b && a > c) {
		if (b > c)
			printf("%d > %d > %d\n",a,b,c);
		else
			printf("%d > %d > %d\n",a,c,b);
	} 
	else if (b > a && b > c) {
		if (a > c)
			printf("%d > %d > %d\n",b,a,c);
		else
			printf("%d > %d > %d\n",b,c,a);
	} 
	else {
		if (a > b)
			printf("%d > %d > %d\n",c,a,b);
		else
			printf("%d > %d > %d\n",c,b,a);
	}
	return EXIT_SUCCESS;
}
