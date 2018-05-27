#include <stdio.h>

int		main(void) 
{
	long long int	n = 4614256656552045848LL;
	double			*p = (double*) &n;
	printf("%f", *p);	
	putchar('\n');
	return (0);
}
