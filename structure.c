#include <stdio.h>
 
struct Books
{
    char title[20];
    char author[100];
    float price;
    int pages;
};
 
int main()
{
    struct Books book1 = {"C Programming", "ABC", 123.99, 300};
    printf("%s\n", book1.title);
    printf("%s\n", book1.author);
    printf("%f\n", book1.price);
    printf("%d\n", book1.pages);
    return 0;
}