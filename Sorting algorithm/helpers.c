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
    printf("\n%s - ", tag);
    for (int i = 0; i < 10; i++)
    {
        printf("%i, ", array_to_print[i]);
    }
    printf("\n");
    
}

// int linear_search_high(int *array_input, int number_searched_for,int index_low,int index_high)
// {
//     if (index_high == index_low)
//         return 0;
//     else 
//     {
//         for (int i = index_high; i > 0; i--)
//         {
//             if (array_input[i] > number_searched_for && array_input[--i]<number_searched_for)
//                 return i-1;
//         }
//     }
    
//     return -5;
// }
