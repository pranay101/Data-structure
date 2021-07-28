#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>


void print_array(int *array_to_print , char *tag)
{
    printf("\n%s - ", tag);
    for (int i = 0; i < 10; i++)
    {
        printf("%i, ", array_to_print[i]);
    }
    printf("\n");
    
}
void swap(int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
int * insertion_sort(int *array_input)
{

    int data_backup;
    int j;
    for (int  i = 1; i < 10; i++)
    {
        data_backup = array_input[i];
        j = i-1;
        while (j >= 0 && array_input[j] < data_backup)
        {
            array_input[j+1] = array_input[j];
            j--;
        }
        array_input[j+1] = data_backup;
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