#include <stdio.h>
#include <stdlib.h>

int		main(void) {
	int 	t1[2][5];
	int 	t2[3][5];
	int 	t3[5][5];
	int 	i, j;

	(void)t2;
	(void)t3;
	for (i = 0 ; i < 2 ; i++) {
		for (j = 0 ; j < 5 ; j++) {
			t1[i][j] = j + 1;
			printf("%2d ", t1[i][j]);
		}
		putchar('\n');
	}
	putchar('\n');
	for (i = 0 ; i < 3 ; i++) {
		for (j = 0 ; j < 5 ; j++){
			t2[i][j] = j + 1 + (5 * i);
			printf("%2d ", t2[i][j]);
		}
		putchar('\n');
	}
	putchar('\n');
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
			printf("%2d ", t3[i][j]);
			++j;
		}
		putchar('\n');
		++i;
	}
	return EXIT_SUCCESS;
}
