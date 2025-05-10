#include <stdio.h>

int main()
{
    int marks;
    char name[30];
    printf("Enter student's name: ");
    scanf("%s", name);
    printf("Enter marks in Maths: ");
    scanf("%d", &marks);

    printf("Hello %s! You have scored %d in Maths!", name, marks);
    return 0;
}