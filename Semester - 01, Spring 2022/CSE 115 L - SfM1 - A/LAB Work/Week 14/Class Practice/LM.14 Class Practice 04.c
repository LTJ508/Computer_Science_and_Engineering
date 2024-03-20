/*
    Passing a Structure as function arguments (book records):
*/

#include <stdio.h>
#include <string.h>

typedef struct {//declaring type using struct
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} books;//type name

//function that takes a structure variable as a parameter
void PRINT_BOOK(books book)
{
    printf("Book Title: %s\n", book.title);
    printf("Book Author: %s\n", book.author);
    printf("Book Subject: %s\n", book.subject);
    printf("Book ID: %d\n\n", book.book_id);
}

int main()
{
    books book1, book2;

    //book1 specification
    strcpy(book1.title, "C Programming");
    strcpy(book1.author, "Nuha Ali");
    strcpy(book1.subject, "C Programming Tutorial");
    book1.book_id = 6495407;

    //book2 specification
    strcpy(book2.title, "Telecom Billing");
    strcpy(book2.author, "Zara Ali");
    strcpy(book2.subject, "Telecom Billing Tutorial");
    book2.book_id = 6495700;

    PRINT_BOOK(book1);//calling function
    PRINT_BOOK(book2);//calling function

    return 0;
}
