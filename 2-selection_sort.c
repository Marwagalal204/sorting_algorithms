#include "sort.h"

/**
 * selection_sort - sorting an array using selection sort
 * @array: array to be sorted
 * @size: size of the array
*/
void selection_sort(int *array, size_t size)
{
size_t min, i, j, temp;

if (array == NULL || size == 0)
return;

for (i = 0; i < size - 1; i++)
{
min = i;

for (j = i + 1; j < size; j++)
{
if (array[min] > array[j])
min = j;
}
if (array[min] != array[i])
{
temp = array[i];
array[i] = array[min];
array[min] = temp;
print_array(array, size);
}}}
