#include<stdio.h>
#include<math.h>


float cal_tri(float a, float b, float c)
{
    float area, s;
    s = (a + b + c)/2;
    float ar1 = (s - a);
    float ar2 = (s - b);
    float ar3 = (s - c);
    area = sqrtf(s * ar1 * ar2 * ar3);
    return area;
}

int main()
{
    float numa,numb,numc;
    printf("a = ");
    scanf("%f",&numa);
    printf("b = ");
    scanf("%f",&numb);
    printf("c = ");
    scanf("%f",&numc);

    float ans = cal_tri(numa, numb, numc);

    printf("Area = %.2f\n",ans);

    return(0);
}