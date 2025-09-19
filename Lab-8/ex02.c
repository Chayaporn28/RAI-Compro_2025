#include<stdio.h>
#include<math.h>

int prime(int num)
{
    if(num < 2)
        return 0;
    for(int i = 2; i < num; i++) {
        if(num % i == 0)
        return 0;
    }
}
int main()
{
    int n1,n2;
    printf("Enter the start and end numbers : ");
    scanf("%d %d",&n1,&n2);
    printf("The prime numbers within the intervals are : \n");
    for(int i = n1; i <= n2; i++) {
        if(prime(i))
        printf("%d ",i);
    }
    printf("\n");

    return(0);

}
