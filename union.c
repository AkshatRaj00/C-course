#include <stdio.h>
#include <string.h>

union Books
{
    char title[20];
    char author[100];
    float price;
    int pages;
};

int main()
{
    union Books book1;
    strcpy(book1.title, "C Programming");
    printf("%s\n", book1.title);

    strcpy(book1.author, "ABC");
    printf("%s\n", book1.author);

    book1.price = 123.99;
    printf("%f\n", book1.price);

    book1.pages = 300;
    printf("%d\n", book1.pages);

    return 0;
}