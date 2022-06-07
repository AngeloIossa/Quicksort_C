#include <stdio.h>
#include <stdlib.h>
#include "quicksort.h"

int main(int argc, char const *argv[])
{
    int array[LENGHT]={5,3,2,6,4,1,3,7};
    int pointer_subarray;
    
    print_array(array);

    pointer_subarray = partition(array,0,(LENGHT-1));
    print_array(array);



    return 0;
}
