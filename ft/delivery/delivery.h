#ifndef _DELIVERY_H

#define _DELIVERY_H

	#include <stdlib.h>

	typedef struct delivery
	{
		int num;
		int gain;
		int weight;
	} delivery;

	delivery * deliveries = NULL; //singleton

	int deliveries_length = 0;

	void fill(int* gains, int* weights, int size)
	{
		int i;

		if (deliveries == NULL)
		{
			deliveries = (delivery*) malloc(sizeof(delivery) * size);
			for (i = 0 ; i < size ; i++)
			{
				deliveries[i].num = i+1;
				deliveries[i].gain = gains[i];
				deliveries[i].weight = weights[i];
			}
			deliveries_length = size;
		}
	}

	void add(int gain, int weight)
	{
		deliveries_length++;
		deliveries = realloc(deliveries, sizeof(delivery) * deliveries_length);
		deliveries[deliveries_length-1].num = deliveries_length;
		deliveries[deliveries_length-1].gain = gain;
		deliveries[deliveries_length-1].weight = weight;
	}

	//reduce
	void remove(int num)
	{
		deliveries_length--;
		delivery * tmp = realloc(deliveries, sizeof(delivery)*deliveries_length);
		for (int i = 0 ; i < deliveries_length ; i++)
		{
			printf("%d-%d-%d\n", tmp[i].num, tmp[i].gain, tmp[i].weight);
		}
	}

	void print()
	{
		for (int i = 0 ; i < deliveries_length ; i++)
		{
			printf("%d-%d-%d\n", deliveries[i].num, deliveries[i].gain, deliveries[i].weight);
		}
	}

	void reset()
	{
		free(deliveries);
		deliveries = NULL;
		deliveries_length = 0;
	}

#endif