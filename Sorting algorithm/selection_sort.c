#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include"helpers.h"
#include<time.h>

int*selection_sort(int input_array[])
{

   int length_of_array = 10;
   printf("Length of array: %d",length_of_array);
   int pointer = 0;
   int small;
   int iteration = 1;
   do
   {
       small = pointer;
       for (int i = pointer +1  ; i < length_of_array; i++)
       { 
           printf("\nvalue of pointer = %d", input_array[pointer]);
           printf("\nvalue of iterable = %d", input_array[i]);
           printf("\ncomparision value = %d", input_array[pointer] > input_array[i] );
           if (input_array[small] > input_array[i] )
               small = i; 
       }
       swap(&input_array[pointer],&input_array[small]);
       pointer++;
       print_array(input_array,"\nIteration -");

   }while (pointer <= length_of_array);

   print_array(input_array,"\nSorted Array");
   
}

int main(void)
{
    // Calculate the time taken by fun()
    clock_t t;
    t = clock();

    int array_input[10] = {654,999,321,123,987,567,345,947,9,197};
    print_array(array_input,"Given Array");
    int *array_output = selection_sort(array_input);

    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("\nSelection sort() took %f seconds to execute \n", time_taken);
    return 0;
}