#include <stdio.h>
#include <stdlib.h>

int		ft_fibonacci(int i);

int		main(void) {
	int 	a, t;

	printf("Saisissez une valeur : ");
	t = scanf("%d", &a);
	if (t != 1) {
		printf("Verifiez votre valeur.\nSaisissez une valeur : ");
		return EXIT_FAILURE;
	}
	printf("%d\n", ft_fibonacci(a));
	return EXIT_SUCCESS;
}

int		ft_fibonacci(int i) {
	int 	res;

	if (i >= 47)
		return (1);
	if (i < 0)
		return (1);
	if (i == 0 || i == 1)
		return i;
	return (ft_fibonacci(i - 1) + ft_fibonacci(i - 2));
}
