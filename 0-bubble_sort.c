#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void bubble_sort(int *array, size_t size) {
int i, j ,temp;

for (i = 0; i < size; i++)
{
    for (j = i + 1; j < size; j++)
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
