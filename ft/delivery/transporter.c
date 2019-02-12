#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#include "delivery.h"
#include "math.h"

const int MAX_WEIGHT = 14;

int 	main(int argc, char **argv)
{
	//data
	int gains[] = {8, 12, 1, 16, 20};
	int weights[] = {3, 6, 1, 7, 9};
	int size = 5;

	deliveries_fill(gains, weights, size);
	deliveries_dump();

	int 	i, j;
	int		depth = power(2, deliveries_length);
	int 	nuplet[depth][deliveries_length];

	//parse
	for (i = 0 ; i < depth ; i++)
	{
		for (j = 0 ; j < deliveries_length ; j++)
		{
			nuplet[i][j] = 0;
			if (i & (1 << j))
				nuplet[i][j] = deliveries[j].num;			
		}
	}

	//dump
	for (i = 0 ; i < depth ; i++)
	{
		for (j = 0 ; j < deliveries_length ; j++)
		{
			printf("%d ", nuplet[i][j]);
		}
		putchar('\n');
	}
	putchar('\n');

	//sort
	int total_gain, total_weight;
	int max_gain = 0;
	int max_weight = 0;
	int winner = -1;

	for (i = 0 ; i < depth ; i++)
	{
		total_gain = 0;
		total_weight = 0;
		for (j = 0 ; j < deliveries_length ; j++)
		{
			if (nuplet[i][j] != 0)
			{
				delivery candidate = get(nuplet[i][j]);			
				total_gain += candidate.gain;
				total_weight += candidate.weight;
			}
		}
		if (max_gain <= total_gain && total_weight <= MAX_WEIGHT &&  total_weight > max_weight)
		{
			max_gain = total_gain;
			max_weight = total_weight;
			winner = i;
		}
	}

	//dump
	if (winner != -1)
	{	
		for (i = 0 ; i < deliveries_length ; i++)
			printf("%d ", nuplet[winner][i]);
		putchar('\n');
	}

	return EXIT_SUCCESS;
}