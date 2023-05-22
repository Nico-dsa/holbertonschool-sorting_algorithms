#include "sort.h"
void swap(int *xp, int *yp)
{
	int tmp;

	tmp = *xp;
	*xp = *yp;
	*yp = tmp;
}
void bubble_sort(int *array, size_t size)
{
	int step;
	int i;

	for (step = 0; step < size - 1;++step)
	{
		for (i = 0; i < size - step - 1; ++i)
		{
			if (array[i] > array[i - 1])
			{
				swap(&array[i],&array[i + 1]);
			}

		}
	}
}
