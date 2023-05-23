#include "sort.h"
void swap(int *xp, int *yp)
{
	int tmp;

	tmp = *xp;
	*xp = *yp;
	*yp = tmp;
}

int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int j;
	int i =  low - 1;

	for (j = low; j <= high ; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	return (i);
}
void quick_recursion(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, low, high, size);
		quick_recursion(array, low, pivot - 1, size);
		quick_recursion(array, pivot + 1, high, size);

	}
}
void quick_sort(int *array, size_t size)
{
	if (array == NULL)
		return;
	quick_recursion(array, 0, size - 1, size);
}
