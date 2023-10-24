#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: Array to be sorted
 * @size: Array size
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	int tmp, swapped;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = tmp;

				print_array(array, size);
				swapped = 1;
			}
		}
		if (swapped == 0)
			break;
	}
}
