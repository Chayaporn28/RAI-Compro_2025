#include<stdio.h>
int main()
{
    int num;
    int count=0,total=0;
        while(count <= 9)
    {
        printf("Enter the number%d : ",count+1);
        scanf("%d",&num);
        count++;
        total = total+num;
    }
    printf("Total sum is : %d",total);

    return (0);
}