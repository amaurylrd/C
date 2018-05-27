#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void 	octal(char str[]);
void	parse(char c);

int 	main(void) {
	char		str[3];
	int			t;

	printf("Privileges ? ");
	t = scanf("%3s", str);
	getchar();
	if (t != 1) {
		fprintf(stderr, "Verifiez votre reponse.\n");
		return EXIT_FAILURE;
	}
	octal(str);
	return EXIT_SUCCESS;
}

void 	octal(char str[]) {
	unsigned int	i;	

	putchar('-');
	for (i = 0 ; i < 3 ; i++)	
		parse(str[i]);
	putchar('-');
}

void 	parse(char c) {
	if (c < '0' || c > '7') {
		fprintf(stderr, "Verifez votre valeur.\n");
		exit (1);
	}
	if (c == '0')
		printf("---");	
	if (c == '1')
		printf("--x");
	if (c == '2')
		printf("-w-");
	if (c == '3')
		printf("-wx");
	if (c == '4')
		printf("r--");
	if (c == '5')
		printf("r-x");
	if (c == '6')
		printf("rw-");
	if (c == '7')
		printf("rwx");
}
