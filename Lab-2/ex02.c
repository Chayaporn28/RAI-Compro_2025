#include<stdio.h>
int main()
{
    int totalmins, hrs, mins;

    printf("Enter total minutes : ");
    scanf("%d", &totalmins);

    hrs= totalmins/60;
    mins=totalmins%60;

    printf("%d mins is %d hrs, and %d mins\n", totalmins,hrs,mins);

    return (0);

}