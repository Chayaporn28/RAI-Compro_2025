#include<stdio.h>
int main()
{
    float x = 2.15;
    float y = 4.32;

    void swap (float *ptx, float *pty) {
        float temp;
        temp = *ptx;
        *ptx = *pty;
        *pty = temp;
    }

    printf("Before swap : x = %.2f, y = %.2f\n",x,y);
    swap(&x,&y);
    printf("After swap : x = %.2f, y = %.2f\n",x,y);

    return(0);

}