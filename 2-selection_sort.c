#include "sort.h"

/**
 * selection_sort - Entry point
 * @array: An array that requires sorting
 * @size: The size of the array
 * Return: Nothing since it's a void function
 */

void selection_sort(int *array, size_t size)
{
size_t x, y, dif;
int value, arraynum, temp, counter;

if (array == NULL || size == 0)
{ return; }

for (x = 0; x < (size - 1); x++)
{
counter = 0;
value = array[x];
arraynum = x;
dif = x + 1;

	while (dif != size)
	{
		if (array[dif] < value)
		{
		value = array[dif];
		arraynum = dif;
		counter = 1;
		}
	dif++;
	}

	if (counter == 1)
	{
	temp = array[x];
	array[x] = array[arraynum];
	array[arraynum] = temp;
	print_array(array, size);
	}
}
}
