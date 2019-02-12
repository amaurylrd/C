#ifndef _DELIVERY_H

#define _DELIVERY_H

	#include <stdlib.h>
	
	void 		deliveries_fill(int* gains, int* weights, int size);
	void 		deliveries_shrink(int* nums, int size);
	void 		deliveries_dump();
	void 		deliveries_reset();

	delivery 	get(int delivery_num);

	typedef struct delivery
	{
		int num;
		int gain;
		int weight;
	} delivery; //defines a delivery

	delivery * 	deliveries = NULL; //singleton
	size_t 		deliveries_length = 0; //size of singleton
	size_t 		deliveries_count = 0; //total number of deliveries

	void 		deliveries_fill(int* gains, int* weights, int size)
	{
		int 	i;

		if (deliveries == NULL)
		{
			deliveries = (delivery *) malloc(sizeof(delivery) * size);
			for (i = 0 ; i < size ; i++)
			{
				deliveries[i].num = i+1;
				deliveries[i].gain = gains[i];
				deliveries[i].weight = weights[i];
			}
			deliveries_length = size;
			deliveries_count = size;
		}
		else
		{
			for (i = 0 ; i < size ; i++)
			{
				deliveries_length++;
				deliveries_count++;
				deliveries = realloc(deliveries, sizeof(delivery) * deliveries_length);
				deliveries[deliveries_length-1].num = deliveries_count;
				deliveries[deliveries_length-1].gain = gains[i];
				deliveries[deliveries_length-1].weight = weights[i];
			}
		}
	}

	void 		deliveries_shrink(int* nums, int size)
	{
		delivery * 	tmp = deliveries;
		int 		i, j, cmp;
		
		cmp = deliveries_length;
		deliveries = NULL;

		for (i = 0 ; i < size ; i++)
		{
			for (j = 0 ; j < deliveries_length ; j++)
			{
				if (nums[i] == tmp[j].num && nums[i] != 0)
				{
					tmp[j].num = 0;
					cmp--;
					break;
				}
			}
		}

		deliveries = (delivery *) malloc(sizeof(delivery) * cmp);
		deliveries_length = cmp;

		j = 0;
		for (i = 0 ; i < cmp ; i++)
		{
			while (tmp[j].num == 0)
				j++;
			deliveries[i] = tmp[j];
			j++;
		}

		free(tmp);
	}

	void 		deliveries_dump()
	{
		int 	i;

		for (i = 0 ; i < deliveries_length ; i++)
			printf("num:%3d   gain:%3d   weight:%3d\n", deliveries[i].num, deliveries[i].gain, deliveries[i].weight);
		putchar('\n');
	}

	void 		deliveries_reset()
	{
		if (deliveries != NULL)
		{
			free(deliveries);
			deliveries = NULL;
			deliveries_length = 0;
			deliveries_count = 0;
		}
	}

	delivery 	get(int delivery_num)
	{
		int i;

		for (i = 0 ; i < deliveries_length ; i++)
			if (deliveries[i].num == delivery_num)
				return deliveries[i];
		return deliveries[-1];
	}

#endif