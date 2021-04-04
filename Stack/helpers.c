#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


//----------------------------------------------------------------------------------------


// function to insert data
int insert(int stack[],int *size_of_array, int *top, int data)
{
    if (*top == *size_of_array-1) // check if the stacks if full already, overflow
    {
        return 0;
    }
    else
    {
        // else insert the data in stack
        *top = *top+1;
        stack[*top] = data;
        return 1;
    }
    // return if theres any error.
    return 2;
}


//----------------------------------------------------------------------------------------

// function to delete data
int pop(int stack[], int *size_of_array, int *top)
{
    int temp;
    if (*top < 0)
    {
        return -2 ; // check if stack is empty, underflow
    }
    else
    {
        // else decrement top to provide space for other data
       temp =  *top;
       *top = *top-1;
       return temp;
    }
   
}


//----------------------------------------------------------------------------------------

// function to print data
void print(int stack[], int *size_of_array, int *top)
{
    for (int  i = 0; i <= *top; i++)
    {
        printf(" %d,",stack[i]); // printting stack data
    }
    printf("\n\t\tTop is at: %d \t\t",*top+1); // printing the position of top
}


//----------------------------------------------------------------------------------------