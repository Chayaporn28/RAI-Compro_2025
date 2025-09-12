#include<stdio.h>
int main()
{
    int size = 6;
    int array[] = {3,1,2,4,5,6};
    int *pt;
    int *pi = array + size;

    for(pt = array; pt < array+size; pt ++) {
        printf("%d\n",*pt);
    }
    return(0);
}