#include<stdio.h>
int main()
{
    int test = 0;
    int *pt = &test;

    printf("The address of test variable is at : %p\n",pt);

    return(0);
}