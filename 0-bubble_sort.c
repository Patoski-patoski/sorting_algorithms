#include "sort.h"

/**
 * bubble_sort - a function that sorts an array of integers in ascending order
 *  using the Bubble sort algorithm
 *
 * @array: array of integers
 * @size: the length of the array
 *
 * Return: Nothing
 **/

void bubble_sort(int *array, size_t size)
{
	int temp;
	int swapped;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = 1;
				print_array(array, size);
			}
		}
		if (swapped == 0)
			break;
	}
}
