#include<stdio.h>
int main()
{
    int size = 6;
    int array[] = {3,1,2,4,5,6};
    int *pt;
    int sum = 0;

    for(pt = array; pt < array + size; pt++) {
        sum += *pt;
    }
    printf("The sum of array is : %d\n",sum);
    return(0);
}