#include "sort.h"

/**
 * swap - swaps elements in an array
 * @a: first element
 * @b: second element
 */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - uses selection sort to sort an array
 * @array: array to sort
 * @size: size of the array
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int *min;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array + 1;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < *min)
			{
				min = array + j;
			}
		}

		if (array + i != min)
		{
			swap(array + i, min);
			print_array(array, size);
		}
	}
}
