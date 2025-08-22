#include<stdio.h>
int main()
{
    int m[5];
    int t=0;
    int max=m[0];

    for (int i = 0; i < 5; i++) {
        printf("Enter the marks of student : ");
        scanf("%d",&m[i]);
        t = t+m[i];

        if (m[i] > max) {
            max = m[i];
        }
    }
    printf("Total Marks : %d\n",t);
    printf("Highest Marks : %d\n",max);

    return(0);
}