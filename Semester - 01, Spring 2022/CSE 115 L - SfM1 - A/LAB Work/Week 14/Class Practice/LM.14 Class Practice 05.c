/*
    Passing a Structure as function arguments (book records):
*/

#include <stdio.h>
#include <string.h>

//global variable
int static SIZE;
int static BOOKS_COUNT;

typedef struct {//declaring type using struct
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} books;//type name

void READ_BOOK(books book[])//this function will read books data from user
{
    for(int i = 0; i < SIZE; i++){
        printf("Enter Book Title(press enter if you want to finish): ");
        gets(book[i].title);

        if(strcmp(book[i].title, "") == 0){
            break;
        }

        printf("Enter Author Name: ");
        gets(book[i].author);

        printf("Enter Subject: ");
        gets(book[i].subject);

        printf("Enter ID: ");
        scanf("%d", &book[i].book_id);

        fflush(stdin);//clearing buffer

        BOOKS_COUNT++;

        printf("\n");
    }
}

void PRINT_BOOK(books book[])//this function will print books data
{
    for(int i = 0; i < BOOKS_COUNT; i++){
        printf("Book Title: %s\n", book[i].title);
        printf("Book Author: %s\n", book[i].author);
        printf("Book Subject: %s\n", book[i].subject);
        printf("Book ID: %d\n\n", book[i].book_id);
    }
}

int main()
{
    printf("How many books you want to enter: ");
    scanf("%d", &SIZE);

    printf("\n");

    fflush(stdin);//clearing buffer

    books book[SIZE];

    READ_BOOK(book);//calling function
    PRINT_BOOK(book);//calling function

    return 0;
}

