#include <stdio.h>

int sumeven(int arr[], int n) 
{
    int sum = 0;
    for(int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            sum += arr[i];
    }
    return sum;
}
int sumodd(int arr[], int n) 
{
    int sum = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 != 0)
            sum += arr[i];
    }
    return sum;
}

int main() 
{
    int num;
    printf("N : ");
    scanf("%d", &num);

    int numbers[num];
    for(int i = 0; i < num; i++) {
        printf("Input : ");
        scanf("%d", &numbers[i]);
    }

    printf("Output : Sum of even number : %d\n",sumeven(numbers,num));
    printf("        Sum of odd number : %d\n",sumodd(numbers,num));

    return 0;
}
