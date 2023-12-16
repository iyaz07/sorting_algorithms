#include "sort.h"

/**
 * main - Entry point
 * @array: An array that requires sorting
 * @size: The size of the array
 * Return: Nothing since it's a void function
 */

void bubble_sort(int *array, size_t size)
{
int checker = 0;
size_t x;
int y;

if (array == NULL || size == 0)
{ return; }

while (checker == 0)
{
checker = 1;
for (x = 0; x < (size - 1); x++)
	{
		if (array[x] > array[x + 1])
		{
		y = array[x];
		array[x] = array[x + 1];
		array[x + 1] = y;
		print_array(array, size);
		checker = 0;
		}
	}
}

}
