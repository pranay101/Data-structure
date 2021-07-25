#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include"helpers.h"
#include <time.h>

int* bubble_sort(int *input_array)
{
    int length_of_array = 10;
    int point_low = 0 ;
    while (length_of_array >= point_low)
    {
        for (size_t i = point_low + 1 ; i < length_of_array; i++)
        {
            if (input_array[point_low] > input_array[i] )
            {
                swap(&input_array[point_low] , &input_array[i]);
            }
        }
        point_low++;
        
    }
    print_array(input_array,"Sorted Array");
    return input_array;
}


int main(void)
{
    // Calculate the time taken by fun()
    clock_t t;
    t = clock();

    int array_input[10] = {654,999,321,123,987,567,345,9447,9,197};
    print_array(array_input,"Given Array");
    int *array_output = bubble_sort(array_input);

    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("\nBubble sort() took %f seconds to execute \n", time_taken);
    return 0;
}