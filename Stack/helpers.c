#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int insert(int stack[],int *size_of_array, int *top, int data)
{
    if (*top == *size_of_array)
    {
        return 0;
    }
    else
    {
        *top = *top+1;
        stack[*top] = data;
        return 1;
    }
    return 2;
}

void pop()
{
   
}

void print(int stack[], int *size_of_array, int *top)
{
    printf("\t\tData of stack:\n\t\t\t\t");
    for (int  i = 0; i < *top; i++)
    {
        printf(" %d,",stack[i]);
    }
    printf("\n\t\t Top is at: %d",*top);
}