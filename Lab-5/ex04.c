#include<stdio.h>
int main()
{
    int num[10];
    int even = 0;
    int odd = 0;

    for (int i = 0; i < 10; i++) {
        printf("Enter value : ");
        scanf("%d",&num[i]);

        if (num[i]%2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    printf("Even Number : %d\n",even);
    printf("Odd Number : %d\n",odd);

    return(0);

}