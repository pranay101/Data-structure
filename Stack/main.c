#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include"helpers.h"




int main()
{
    int stack[10];
    int top =-1;
    int size_of_array = 10;
    int result;
    int result_pop;
    system("cls");
    printf("\t\t\t\t\t\t Stack Data structure \n\n");
    char choice;
    while(1)
    {
        printf("\tEnter : \n\n");
        printf("\t\t A to add data to stack\n");
        printf("\t\t R to pop data from stack\n");
        printf("\t\t P to print stack\n");
        printf("\t\t Q to Quit\n");
        printf("\n\t\t Your Choice: \t ");

        scanf("%c",&choice);


        switch (choice)
        {
        case 'A':
        case 'a':
            {
                system("cls");
                int data;
                printf("\t\t Enter the data you want to insert: ");
                scanf("%d",&data);
                result = insert(stack,&size_of_array,&top,data);
                if (result == 1)
                {
                    printf("\n\n\t\t %d is inserted in the stack.",data);
                    printf("\n\n\n\t\t Enter to go back......");
                    getch();
                    system("cls");
                }
                if (result == 0)
                {
                    printf("Overflow, Stack is full.");
                }
                else
                {
                    printf("An error occured");
                }
                break;
            }     
        case 'r':
        case 'R':
        {
            system("cls");
            result_pop = pop(stack,&size_of_array,&top);
            if (result_pop == -1)
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
            system("cls");
            print(stack,&size_of_array,&top); 
            printf("\n\n\t\tPress enter to continue....");
            getch();
            break;
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
    return 0;
}