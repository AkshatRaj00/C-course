#include <stdio.h>
int *myvalue()
{
    int a = 10;
    return &a;
}

int main()
{
    int *ptr = myvalue();
    printf("%d", *ptr);
    return 0;
}