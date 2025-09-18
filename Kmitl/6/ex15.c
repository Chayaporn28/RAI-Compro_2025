#include<stdio.h>
int main()
{
    int array[3][3];
    int *pt = &array[0][0];
    
    for(int i = 0; i < 9; ++i) {
        *(pt + i) = i + 1; 
    }
    printf("Array A 3x3 : \n");
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            printf("%d ",*(pt + (i * 3) + j));
        }
        printf("\n");
    }
    return(0);
}