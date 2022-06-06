#include <stdio.h>
#include <stdlib.h>
#include "quicksort.h"

/*
 *  Swap function 
*/
void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/*
 *  Print array function 
*/
void print_array (int *array)
{
    int i;
    printf("Array: ");
    for (i = 0; i < LENGHT; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}


/*
 *  Partition function 
*/
int partition (int *array, int first, int last)
{
    int i, j;
}