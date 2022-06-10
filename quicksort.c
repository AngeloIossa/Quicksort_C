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
void print_array (int *array, int lenght)
{
    int i;
    printf("Array: ");
    for (i = 0; i < lenght; i++)
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
    int pivot;
    // Choice pivot equal to first element in the array
    pivot = array[0];
    // Set pointer at the endpoints of the array 
    i = first-1;
    j = last+1;
    do while(i<=j)
    {
        // Move j backwards
        do
        {
            j--;
        } while (array[j] > pivot);
        // Move i forward
        do
        {
            i++;
        } while (array[i] < pivot);
        // Check if the work if finished
        if(i<=j) {
            swap(&array[i], &array[j]);
        }
    } while(i<=j);

    return j;
}

/*
 *  Quicksort function 
*/
void quicksort (int *array, int first, int last)
{

}
