#include<stdio.h>
int main()
{
    int num[8];
    int max,min;

    for (int i = 0; i < 8; i++) {
        printf("Enter number %d : ",i+1);
        scanf("%d",&num[i]);

        if (i == 0 ) {
            min = max = num[i];
        } else {

        } if (min < num[i])
            min = num[i]; {
        } if (max > num[i])
            max = num[i];
        }

        printf("Smallest Number : %d\n",min);
        printf("Largest Number : %d\n",max);

    return(0);
}