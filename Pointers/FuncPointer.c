#include <stdio.h>


int func(int a[])
{
    for (int i = 0; i < 2; i++)
    {
        printf("The value of a is %d ", a[i]);
    }
    
}
int main()
{
    void (*FUNC_ptr[])(int[]) = {&func};
    int arr[]={11,21};
    FUNC_ptr[0](arr);

    return 0;
}