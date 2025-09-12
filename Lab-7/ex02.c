#include<stdio.h>
int main()
{
    int a = 0;
    int b = 5;
    int *pt1 = &a;
    int *pt2 = &b;

    printf("Before reverse : a = %d, b = %d\n",a,b);

    int temp;
    temp = *pt1;
    *pt1 = *pt2;
    *pt2 = temp;

    printf("After reverse : a = %d, b = %d\n",a,b);

    return(0);
}