#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include"helpers.h"


int * insertion_sort(int *array_input)
{
    int pointer = 1;
    int length_of_array = 10;
    int index_high = 9 , index_low = 0;
    int index_to_swap;
    int data_backup;
    while (pointer <= length_of_array)
    {
        for (int i = pointer; i <= 0; i--)
        {
            int j= i-1;
            array_input[i] = array_input[j--];
        }
        array_input[index_to_swap] = data_backup;
        
    }
    print_array(array_input,"Sorted_Array");
    return array_input;
}

int main(void)
{
    int array_input[10] = {654,999,321,123,987,567,345,9447,9,197};
    print_array(array_input,"Given Array");
    int *array_output = insertion_sort(array_input);
    return 0;
}