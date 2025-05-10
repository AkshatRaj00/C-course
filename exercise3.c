#include<stdio.h>

int fibrecursive(int n)
{
    if(n==1||n==2)
    {
        return n-1;
    }
    else{
        return fibrecursive(n-1)+fibrecursive(n-2);
    }

}
int fibiterative(int n)
{
    int a=0;
    int b=1;

    for(int i=0;i<n-1;i++)
    {
        b = a+b;
        a=b-a;
    }

    return a;
}

int main()
{
    int number;
    printf("enter the index to get fibonacci series\n");
    scanf("%d",&number);
    
    printf("the value of fibonacci number at position no %d using iterative approach is %d\n",number,fibiterative(number));

    printf("the value of fibonacci number at position no %d using recursive approach is %d\n ",number,fibrecursive(number));

    return 0;
}