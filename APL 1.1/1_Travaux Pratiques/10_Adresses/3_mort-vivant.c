#include <stdio.h>
#include <time.h>
 
int		main(void)
{
	int *p;

	if (time(NULL) % 2)
   	{
		int x = 59;
		p = &x;
	} 
	else
   	{
		int y = 31;
		p = &y;
	}
	//printf("%d", x);
	//printf("%d", y);
	printf("%d", *p);
	putchar('\n');
	return (0);
}
