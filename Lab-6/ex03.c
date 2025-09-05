#include<stdio.h>
#include<math.h>
int main()
{
    struct point {
        float x;
        float y;
    }; struct point pt1,pt2;

    printf("x1 : ");
    scanf("%f",&pt1.x);
    printf("y1 : ");
    scanf("%f",&pt1.y);
    printf("x2 : ");
    scanf("%f",&pt2.x);
    printf("y2 : ");
    scanf("%f",&pt2.y);

    float disx = pt2.x - pt1.x;
    float disy = pt2.y - pt1.y;
    float disall = sqrtf(disx * disx + disy * disy);

    printf("Distance between (%.1f,%.1f) and (%.1f,%.1f) is %.3f unit(s)",pt1.x,pt1.y,pt2.x,pt2.y,disall);

    return(0);
}