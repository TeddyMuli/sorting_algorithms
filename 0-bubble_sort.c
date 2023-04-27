#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void bubble_sort(int *array, size_t size) {
int temp, new;
unsigned int i,n = size;

do {
		new = 0;

		for (i = 1; i < n; i++)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temp;
				new = i;
				print_array(array, size);
			}
		}
		n = new;
	} while (n >= 1);}

int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    bubble_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
