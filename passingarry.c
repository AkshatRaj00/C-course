#include<stdio.h>

int func1(int array[])
{
    for(int i=0; i<4; i++)
    {
        printf("the value at %d is %d\n",i,array[i]);
    }
    return 0;
}
void func2(int* ptr)
{
    for(int i=0; i<4; i++)
    {
        printf("the value at %d is %d\n",i,*(ptr+i));
    }
    *(ptr+2) = 6534; // changing the value at index 2 to 8

}
void func3(int arr [2][2])
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("the value at %d %d is %d\n",i,j,arr[i][j]);
        }
    }
}

int main()
{
    int arr [][2]= {{1,2},{3,4}};

    func3(arr);
    return 0;
}