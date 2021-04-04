
//----------------------------------------------------------------------------------------

// function to add data into stack. takes 4 inputs the stack itself, its size position of top and the data.
// returns 0 if the stack is full i.e. overflow.
// returns 1 if the insertion is successfull.
// returns 2 if theres an error.
int insert(int stack[], int * , int *,int);

//----------------------------------------------------------------------------------------

// function to delete data from stack. as stack follows LIFO the latest data will deleted first.
// returns -2 is stack is empty i.e. underflow
// returns the position of top if the deletion is successfull
int pop(int stack[], int*, int *);

//----------------------------------------------------------------------------------------

// print the data in stack and the position of top.
// returns void.
void print(int stack[],int *, int *);

//----------------------------------------------------------------------------------------