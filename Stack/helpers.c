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

int pop(int stack[], int *size_of_array, int *top)
{
    int temp;
    if (*top < 0)
    {
        return -1 ;
    }
    else
    {
       temp =  *top;
       *top = *top-1;
       return *top;
    }
   
}

void print(int stack[], int *size_of_array, int *top)
{
    printf("\t\tData of stack: \t\t");
    for (int  i = 0; i <= *top; i++)
    {
        printf(" %d,",stack[i]);
    }
    printf("\n\t\tTop is at: %d \t\t",*top+1);
}