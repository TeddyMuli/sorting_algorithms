#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void bubble_sort(int *array, size_t size) {
int temp;
unsigned int i,j, n = size;


for (i = 0; i < n; i++)
{
    for (j = i + 1; j < n; j++)
    {
        if (array[j] < array[i])
        {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            print_array(array,size);
        }
    }
}
}
