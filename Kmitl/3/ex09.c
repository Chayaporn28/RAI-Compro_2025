#include<stdio.h>
int main()
{
    int mar[3][3]={1,0,-1,-1,2,3,2,4,5};
    int r,c;

    printf("Martrix A = \n");
    for(r=0;r<3;r++) {
        for(c=0;c<3;c++) {
            printf("%5d",mar[r][c]);
        }
        printf("\n");
    }
    for (r=0;r<3;r++) {
        for(c=0;c<3;c++) {
            if (r!=c) {
                mar[r][c] = 0;
            }
        }
    }
    printf("Diagonal Martrix of A = \n");
    for (r=0;r<3;r++) {
        for(c=0;c<3;c++) {
            printf("%5d",mar[r][c]);
        }
        printf("\n");
    }
    return(0);
}