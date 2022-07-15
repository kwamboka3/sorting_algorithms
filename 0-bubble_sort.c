#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using the
 * Bubble sort algorithm
 *
 * @array: Pointer to the beginning of an array
 * @size: The size of the array
 *
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
	int num = 1, tmp = 0;
	size_t j;

	if (size < 2 || !array)
		return;

	while (num == 1)
	{
		num = 0;

		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
				num = 1;
			}
		}
	}
}
