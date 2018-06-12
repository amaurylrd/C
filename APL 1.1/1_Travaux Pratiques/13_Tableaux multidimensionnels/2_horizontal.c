#include <stdio.h>
#include <stdlib.h>

int		main(void) {
	int 	t1[2][5];
	int 	t2[3][5];
	int 	t3[5][5];
	int 	i, j;

	(void)t2;
	(void)t3;
	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < 5)
		{
			t1[i][j] = j + 1;
			++j;
		}
		++i;
	}
	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 5)
		{
			t2[i][j] = j + 1 + (5 * i);
			++j;
		}
		++i;
	}
	i = 0;
	while (i < 5)
	{
		j = 0;
		while (j < 5)
		{
			if (i >= (j + 1))
				t3[i][j] = j + 1;
			else
				t3[i][j] = 0;
			++j;
		}
		++i;
	}
	i = 0;
	while (i < 5)
	{
		if (i < 2)
		{
			j = 0;
			while (j < 5)
			{
				printf("%d ", t1[i][j]);
				++j;
			}
			printf("  ");
		}
		else
			printf("            ");
		if (i < 3)
		{
			j = 0;
			while (j < 5)
			{
				if (i < 2)
					printf("%d ", t2[i][j]);
				else
					printf("%d", t2[i][j]);
				++j;
			}
			if (i == 1)
				printf("  ");
			else
				printf("   ");
		}
		else
			printf("             ");
		j = 0;
		while (j < 5)
		{
			printf("%d ", t3[i][j]);
			++j;
		}
		putchar('\n');
		++i;
	}
	return EXIT_SUCCESS;
}
