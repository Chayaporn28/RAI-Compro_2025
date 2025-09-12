#include<stdio.h>
int main()
{
    int array[] = {3,1,2,4,5,6};
    int *pt;
    int *pi = array + 6;
    int max = 0;

    for(pt = array; pt < pi; pt++) {
        if(*pt > max) {
            max = *pt;
        }
    } 
    printf("Max value : %d\n",max);
    return(0);
}