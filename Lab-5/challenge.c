#include<stdio.h>
int main()
{
    int num[5];
    int time[5];
    int ele;

    printf("Input : \n");
    printf("Enter number of element : ");
    scanf("%d",&ele);

    for (int i = 0; i > 5; i++) {
        printf("Enter %d integers : ",ele);
        scanf("%d",&num[i]);
        time[i] = -1;
    }
    for (int i = 0; i < num; i++) {
        int count = 1;
        for (int j = i; j < num; j++) {
            if (num[i] == num[j]) {
                count++;
                time[j] = 0;
            }
        }
        if (time[i] != 0) {
            time[i] = c;
        }
    }
    printf("\nOutput : \n");
    for (int i = 0; i < num; i++) {
        if (time[i] != 0) {
            printf("Element %d occurs %d time\n",num[5],time[5]);
        }
    }

    return(0);

}