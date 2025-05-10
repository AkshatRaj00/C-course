#include <stdio.h>
 
int factorial(int num)
{
    if (num > 0)
    {
        return num * factorial(num - 1);
    }
    else
    {
        return 1; // Corrected to return 1 for factorial base case
    }
}
 
int main()
{
    int ans = factorial(10);
    printf("%d", ans);
    return 0;
}