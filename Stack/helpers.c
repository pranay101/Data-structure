#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <ctype.h>


#include"helpers.h" // user-defined headerfile


//----------------------------------------------------------------------------------------


// function to insert data
int insert(int stack[],int *size_of_array, int *top, int data)
{
    if (!isdigit(data))
    {
      if (*top == *size_of_array-1) // check if the stacks if full already, overflow
        {
            printf("overflow");
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
    else
    {
        return 3;
    }
    
    
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
int print(int stack[], int *size_of_array, int *top, int istest)
{
    int check = 0;
    if (istest)
    {
        for (int  i = 0; i <= *top; i++)
        {
            check++;
        }
        return check;
    }
    else
    {
       printf("\n\t\t\t");
        for (int  i = 0; i <= *top; i++)
        {
            printf("%d, ",stack[i]); // printting stack data
            check++;
        }
        printf("\n");
        return check;
    }
}


//----------------------------------------------------------------------------------------
void exit_program()
{
    printf("\n\n\t\t\tExiting Program... Press Enter");
    getch();
    exit(0);
}