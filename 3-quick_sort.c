#include "sort.h"
/**
 * swap - swap 2 arguments
 * @x: first arg
 * @y: second arg
*/
void swap(int *x, int *y)
{int temp;

temp = *x;
*x = *y;
*y = temp; }
/**
 * partition - partition an array for quick sort
 * @array: array to be partitioned to sorted
 * @lb: lber bound
 * @ub: upper bound
 * @size: size of array
 * Return: end
*/
int partition(int *array, int lb, int ub, size_t size)
{
int pivot = array[ub];
int i = lb - 1;
int j;

for (j = lb; j < ub; j++)
{
if (array[j] < pivot)
{
i++;
if (array[i] != array[j])
{
swap(&array[i], &array[j]);
print_array(array, size);
}}}

if (array[i + 1] != array[ub])
{
swap(&array[i + 1], &array[ub]);
print_array(array, size);
}
return (i + 1);
}
/**
 * quick_sort_recursion - it keeps sorting the array
 * @array: array to be partitioned to sorted
 * @lb: lber bound
 * @ub: upper bound
 * @size: size of array
*/
void quick_sort_recursion(int array[], int lb, int ub, size_t size)
{int pivot;

if (lb < ub)
{pivot = partition(array, lb, ub, size);
quick_sort_recursion(array, lb, pivot - 1, size);
quick_sort_recursion(array, pivot + 1, ub, size); }}
/**
 * quick_sort - sorting array using quicksort method
 * @array: array to be partitioned to sorted
 * @size: size of array
*/
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;
quick_sort_recursion(array, 0, size - 1, size); }
