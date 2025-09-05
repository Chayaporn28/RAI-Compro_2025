#include<stdio.h>
int main()
{
    int i;
    int total=0;
    struct time {
        int min;
        int sec;
    } time[3];
    for (i = 0; i < 3; i++) {
        printf("Time input (m:s) : ");
        scanf("%d:%d",&time[i].min,&time[i].sec);
        total += time[i].min*60 + time[i].sec;
    }
    printf("Total time elasped : %d seconds\n",total);

    return(0);
}