#include<stdio.h>
int main()
{
    float integer1;
    float integer2;
    float integer3;

    printf("Enter integer1 : ");
    scanf("%f", &integer1);
    printf("Enter integer2 : ");
    scanf("%f", &integer2);
    printf("Enter integer3 : ");
    scanf("%f", &integer3);

    

    int max,min;
    if (integer1 <= integer2 && integer1 <= integer3) {
        min = integer1;
    } else if (integer2 <= integer1 && integer2 <= integer3) {
        min = integer2;
    } else {
        min = integer3;
    }

    if (integer1 >= integer2 && integer1 >= integer3) {
        max = integer1;
    } else if (integer2 >= integer1 && integer2 >= integer3) {
        max = integer2;
    } else {
        max = integer3;
    }
      

    printf("Result\n");
    printf("Minimum : %d\n",min);
    printf("Maximum : %d\n",max);
    float sum =(integer1+integer2+integer3);
    printf("Sum : %.2f\n", sum);
    float Average =(integer1+integer2+integer3)/3;
    printf("Average : %.2f\n", Average);

    return(0);
}