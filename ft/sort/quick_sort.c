#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_RAND 20
#define MAX_LENGTH 20

void	grid_show(const int* array, int range);
void 	quick_sort(int* array,int fst,int lst);

int		main(void)
{
	int* 	array = NULL;
	int		i, random;

	srand((unsigned) time(NULL));
	array = (int *) malloc(MAX_LENGTH * sizeof(int));
	for (i = 0 ; i < MAX_LENGTH ; i++)
	{
		random = rand() % MAX_RAND + 1;
		array[i] = random;
	}
	grid_show(array, MAX_LENGTH);
	quick_sort(array, 0, MAX_LENGTH-1);
	grid_show(array, MAX_LENGTH);

	return EXIT_SUCCESS;
}

void	grid_show(const int* array, int range)
{
	int 	i;

	for (i = 0 ; i < range ; i++)
		printf("%d ", array[i]);
	putchar('\n');
}

void 	quick_sort(int* array, int fst, int lst)
{
	int i, j, pivot, tmp;

	if (fst < lst)
	{
		pivot = fst;
		i = fst;
		j = lst;
		while (i < j)
		{
			while (array[i] <= array[pivot] && i < lst)
				i++;
			while (array[j] > array[pivot])
				j--;
			if (i < j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
			}
		}
		tmp = array[pivot];
		array[pivot] = array[j];
		array[j] = tmp;
		quick_sort(array, fst, j-1);
		quick_sort(array, j+1, lst);
	}
}