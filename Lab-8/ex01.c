#include<stdio.h>
#include<math.h>
#define pi 3.14

float circum(float r)
{
    return 2 * pi * r; 
}

float area(float r)
{
    return pi * (r * r);
}

int main()
{
    float r, c, a;
    printf("Enter the radius in cm : ");
    scanf("%f",&r);
    c = circum(r);
    a = area(r);
    printf("Circumference : %.2f\n",c);
    printf("Area : %.2f\n",a);

    return(0);
}