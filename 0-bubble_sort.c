#include "sort.h"

/**
 * bubble_sort - this function sorts an array of integers
 * in ascending order using bubble sort alg
 * @array: The array of integers
 * @size: size of the array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	int flag;

	for (i = 1; i < size; i++)
	{
		flag = 0;
		for (j = 0; j <= size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				flag = 1;
				print_array(array, size);
			}
		}
		if (flag == 0)
			break;
	}
}
