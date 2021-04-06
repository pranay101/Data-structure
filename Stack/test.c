//header files ----------------------------------------------------------------------------

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include"helpers.h" // userdefined header file
#include"test.h" // userdefined header file. contain function to test the progran


//----------------------------------------------------------------------------------------


//-----------------------------------Text Colors --------------------------------------------





void red(){
  printf("\033[1;31m");
}

void green() {
  printf("\033[0;32m");
}

void reset() {
  printf("\033[0m");
}

//----------------------------------------------------------------------------------------


//-------------------------------------Test Function -------------------------------------

int test_insert(int stack[],int *size_of_array, int *top)
{
    int data_stack[11]={1,2,3,4,5,6,7,8,9,10,11};
    int data;
    int result;
    for(size_t i = 0; i < *size_of_array; i++)
    {
      data=data_stack[i];
      result = insert(stack,size_of_array,top,data);
      if (result == 2 || result == 3)
      {
       return 0;
      }
      if (result == 0)
      {
		
        return 1;
      }
    }
}

//----------------------------------------------------------------------------------------

// function to delete data
int test_pop(int stack[], int *size_of_array, int *top)
{    
	int result;
	for (size_t i = 0; i < *size_of_array; i++)
	{
		result = pop(stack,size_of_array,top);
		if (i == *size_of_array-1)
		{
			return 1;
		}
	}
	return 0;
}

//----------------------------------------------------------------------------------------

// function to print data
int test_print(int stack[], int *size_of_array, int *top, int istest)
{
    int result = print(stack,size_of_array,top,istest);
	if (result == *size_of_array)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


//----------------------------------------------------------------------------------------


//----------------------------------------Utility-----------------------------------------

void test_pass(int test_number)
{
	green();
	printf("\n\t\t\tTest %d Passed !!\n",test_number);
	reset();
}


void test_fail(int test_number)
{
	red();
	printf("\n\t\t\tTest %d Failed!!\n",test_number);
	reset();
}

				

