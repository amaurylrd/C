#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#include "delivery.h"

int 	main(int argc, char **argv)
{
	const int MAX_WEIGHT = 14;
	int gains[] = {8, 12, 1, 16, 20};
	int weights[] = {3, 6, 1, 7, 9};
	int size = 5;

	fill(gains, weights, size);
	

	print();

	
	add(3, 4);
	
	remove(3);

	print();
	
	return EXIT_SUCCESS;
}