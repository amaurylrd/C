#ifndef _MATH_H

#define _MATH_H

	long 	fact(int n);
	float	comp(int k, int n);
	int 	power(int k, int n);
	void 	quick_sort(int* array, int fst, int lst);

	long 	fact(int n)
	{
    	long 	k = 1;

    	if (n == 0)
    		return 1;
    	else
        	k = n * fact(n - 1);
    	return k;
	}

	float	comp(int k, int n)
	{
		float res = fact(n) / (fact(k) * fact(n - k));
		return res;
	}

	int 	power(int k, int n)
	{
		int 	i, res;

		res = k;
  		for (i = 1 ; i < n ; i++)
  			res *= k;
  		return res;
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

#endif