#include "sort.h"

/**
 * bubble_sort - function to sort an array in bubble sort
 * @array: array to be sorted
 * @size: size of the array
*/
void bubble_sort(int *array, size_t size)
{
size_t i, n, flag, temp;

if (array == NULL || size == 0 || size < 2)
return;

for (i = 0; i < size - 1; i++)
{
flag = 0;
for (n = 0; n < size - 1 - i; n++)
{
if (array[n] > array[n + 1])
{
temp = array[n];
array[n] = array[n + 1];
array[n + 1] = temp;
flag = 1;
print_array(array, size);
}
}
if (flag == 0)
break;
}
}
