#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av) {
	int 	n, i, j;

	if (ac != 2) {
		fprintf(stderr, "Veuillez entrer un nombre d'arguments correct !\n");
		return EXIT_FAILURE;
	}
	n = atoi(av[1]);
	n *= 2;
	i = 0;
	while (i <= n)
	{
		j = 0;
		if (i == 0 || i == n)
		{
			while (j <= n)
			{
				if (j == 0 || j == n)
					putchar('+');
				else
					printf("--");
				++j;
			}
		}
		else if (i < (n / 2))
		{
			while (j <= n)
			{
				if (j < i)
					printf("| ");
				else if (j > (n - i))
					printf(" |");
				else if (j == i || j == (n - i))
					putchar('+');
				else
					printf("--");
				++j;
			}
		}
		else if (i > (n / 2))
		{
			while (j <= n)
			{
				if (j < (n - i))
					printf("| ");
				else if (j == (n - i) || j == i)
					putchar('+');
				else if (j > i)
					printf(" |");
				else
					printf("--");
				++j;
			}
		}
		else
		{
			while (j < n)
			{
				if (j < (n / 2))
					printf("| ");
				else
					printf(" |");
				++j;
			}
		}
		putchar('\n');
		++i;
	}
	return EXIT_SUCCESS;
}
