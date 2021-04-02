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
    system("cls");
    printf("\t\t\t\t\t\t Stack Data structure \n\n");
    char choice;
    do
    {
        label:
            printf("\tEnter : \n\n");
            printf("\t\t\t A to add data to stack\n");
            printf("\t\t\t R to pop data from stack'n");
            printf("\t\t\t P to print stack\n");
            printf("\t\t\t Q to Quit\n");

            scanf("%c",&choice);
            if (choice == 'a' || choice == 'A')
            {
                int data;
                printf("\t\t Enter the data you want to insert: ");
                scanf("%d",&data);
                result = insert(stack,&size_of_array,&top,data);
                if (result == 1)
                {
                    printf("%d is inserted in the stack.",data);
                    printf("Enter to go back");
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
                
            }
            if (choice == 'r' || choice == 'R')
            {
                system("cls");
                pop();
            }
            if (choice == 'p' || choice == 'P')
            {
                system("cls");
                print(stack,&size_of_array,&top); 
                printf("\n\n\t\t\t Press enter to continue....");
                getch();               
            }            
            if (choice == 'q' || choice == 'Q')
            {
                system("cls");
                printf("exiting program... press enter");
                getch();
                exit(0);
            } 

    } while (choice != 'q' || choice != 'Q');
    return 0;
}