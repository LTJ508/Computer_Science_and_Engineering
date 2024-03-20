/*
    Write a function called search that takes an array of Books structures and a string called title i.e.
    the header of the function will be: void search(struct Books b[], char title[]). This function finds the book in the
    array b[] whose title is the same as the parameter called title and then prints all the info (title, authors, id,
    subject) of that book.
*/

#include <stdio.h>
#include <string.h>

int static SIZE;//declaring global variable
int static BOOKS_COUNT;//global variable

typedef struct {//declaring variable type
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} books;//type name

void SEARCH(books b[], char title[])//this function will search the book by its title
{
    int found = 0;

    for(int i = 0; i < BOOKS_COUNT; i++){
        if(strcmp(b[i].title, title) == 0){//if found it will print it
            printf("Book Title: %s\n", b[i].title);
            printf("Book Author: %s\n", b[i].author);
            printf("Book Subject: %s\n", b[i].subject);
            printf("Book ID: %d\n\n", b[i].book_id);

            found = 1;
        }
    }

    if(found == 0){
        printf("\nBooks not found in database..\n");
    }
}

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

int main()
{
    char key[50];

    printf("How many books you want to enter: ");
    scanf("%d", &SIZE);//taking input of books list size

    printf("\n");

    fflush(stdin);//clearing buffer

    books book[SIZE];//declaring book array of books type

    READ_BOOK(book);//calling function

    printf("\n\nEnter Book Tile which you want to search: ");
    gets(key);//taking input of search key

    printf("\n");

    SEARCH(book, key);//calling function for search

    return 0;
}
