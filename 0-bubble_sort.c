#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using the
 *               Bubble sort algorithm
 * @array: pointer to the array to be sorted
 * @size: number of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    int temp;

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                // Swap
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;

                // Print the array after each swap
                printf("[Swap]: ");
                for (size_t k = 0; k < size; k++)
                {
                    printf("%d ", array[k]);
                }
                printf("\n");
            }
        }
    }
}

