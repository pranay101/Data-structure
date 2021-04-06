//header files ----------------------------------------------------------------------------

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include"helpers.h" // userdefined header file
#include"test.h" // userdefined header file


//----------------------------------------------------------------------------------------


int main()
{

    int size_of_array = 10;
    int stack[size_of_array]; //stack itself
    int top =-1;
    int result;
    int result_pop;
    int result_print;
    system("cls");
    printf("\t\t\t\t\t\t Stack Data structure \n\n");
    char choice;
    while(1)
    {
        // main menu
        printf("\tEnter : \n\n");
        printf("\t\t A to add data to stack.\n");
        printf("\t\t R to pop data from stack.\n");
        printf("\t\t P to print stack.\n");
        printf("\t\t Q to Quit.\n");
        printf("\t\t T to Run Tests.\n");
        printf("\n\t\t Your Choice: \t ");

        scanf("%c",&choice);

        // switch according to user's choice
        switch (choice)
        {
        case 'A':
        case 'a':
            {

                system("cls");
                int data;
                printf("\t\t Enter the data you want to insert: ");
                scanf("%d",&data);
                result = insert(stack,&size_of_array,&top,data); // refer to helpers.h for more info regarding the function
                if (result == 1)
                {
                    printf("\n\n\t\t %d is inserted in the stack.",data);
                    printf("\n\n\n\t\t Enter to go back......");
                    getch();
                    system("cls");
                    break;                    
                }
                if (result == 0)
                {
                    printf("Overflow, Stack is full.");
                    getch();
                    system("cls");
                    break;
                }
                if (result == 3)
                {
                    printf("Entered data is not a number");
                    getch();
                    system("cls");
                    break;
                }
                else
                {
                    printf("An error occured");
                    getch();
                    system("cls");
                    break;
                }
                getch();
                system("cls");
                break;
            }     
        case 'r':
        case 'R':
        {
            system("cls");
            result_pop = pop(stack,&size_of_array,&top); // refer to helpers.h for more info regarding the function
            if (result_pop == -2)
            {
                printf("\n\n\t\tUnderflow, theres no element to pop out..");
            }
            else
            {
                printf("\n\t\t%d is deleted from the stack",stack[result_pop]);
            }
            printf("\n\n\t\tPress enter to continue....");
            getch();
            break;
        }
        case 'p':
        case 'P':
        {
            int istest = 0;
            system("cls");
            result_print = print(stack,&size_of_array,&top,istest); 
            printf("\n\n\t\tPress enter to continue...."); // refer to helpers.h for more info regarding the function
            getch();
            break;
        }
        case 't':
        case 'T':
        {
            int istest = 1;
            system("cls");
            if (test_insert(stack,&size_of_array,&top))
            {
                test_pass(1);
                if (test_print(stack,&size_of_array,&top,istest))
                {
                    test_pass(2);
                    if (test_pop(stack,&size_of_array,&top))
                    {
                        test_pass(3);
                        green();
                        printf("\n\t\t\tCode Working Fine.....!!   :D\n");
                        reset();
                        exit_program();
                    }
                    else
                    {
                        test_fail(3);
                        red();
                        printf("\n\t\t\tCode not Working .....!!    :(");
                        reset();
                        exit_program();
                    }
                }
                else
                {
                    test_fail(2);
                    exit_program();
                }
            }
            else
            {
                test_fail(1);
                exit_program();
            }
        }
        case 'q':
        case 'Q':
        {
            system("cls");
            printf("exiting program... press enter");
            getch();
            exit(0);
        }
        default:
        {
            system("cls");
            break;
        }
        }
    }
    return EXIT_SUCCESS;
}

//----------------------------------------------------------------------------------------