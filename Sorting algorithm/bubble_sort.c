#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include"helpers.h"


int main(void)
{
    int array_input[10] = {654,999,321,123,987,567,345,9447,9,197};
    print_array(array_input,"Given Array");
    int *array_output = bubble_sort(array_input);
    return 0;
}