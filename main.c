#include <stdio.h>
#include <stdlib.h>
#include "quicksort.h"

int main(int argc, char const *argv[])
{
    int array[LENGHT]={5,3,2,6,4,1,3,7};
    int pointer_subarray, lenght;

    print_array(array, LENGHT);

    pointer_subarray = partition(array,0,(LENGHT-1));
    printf("Q: %d\n", pointer_subarray);
    print_array(array, LENGHT);

    // quicksort(array, 0, LENGHT-1);
    // print_array(array, LENGHT);

    return 0;
}
