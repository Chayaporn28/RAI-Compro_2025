#include <stdio.h>
#include <math.h>

int sum(int a, int b) 
{
    return (a * a) + (b * b);
}

int main() 
{
    int n1,n2;
    printf("Enter two integers : ");
    scanf("%d %d",&n1,&n2);

    printf("Sum of squares of %d and %d is %d\n",n1,n2,sum(n1,n2));
    return 0;
}