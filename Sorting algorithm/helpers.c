#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

void swap(int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
void print_array(int *array_to_print , char *tag)
{
    printf("%s - ", tag);
    for (int i = 0; i < 10; i++)
    {
        printf("%i, ", array_to_print[i]);
    }
    printf("\n");
    
}

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

