#include<stdio.h>
int main()
{
    struct vector {
        float x;
        float y;
    }; struct vector u,v,re; 
    printf("u_x : ");
    scanf("%f",&u.x);
    printf("u_y : ");
    scanf("%f",&u.y);
    printf("v_x : ");
    scanf("%f",&v.x);
    printf("v_y : ");
    scanf("%f",&v.y);

    re.x = u.x + v.x;
    re.y = u.y + v.y;

    printf("Resultant vector is equvalence to %.1fi + %.1fj",re.x,re.y);

    return(0);
}