#include<stdio.h>
int main()
{
    char name[10];
    int age;
    float height;
    int weight;
    char gender;
    char education[20];

    printf("Enter your name : ");
    scanf("%s", name);
    printf("Enter your age : ");
    scanf("%d", &age);
    printf("Enter your height : ");
    scanf("%f", &height);
    printf("Enter your weight : ");
    scanf("%d", &weight);
    printf("Enter your gender : ");
    scanf("%s", &gender);
    printf("Enter your Education Qualification : ");
    scanf(" %[^\n]", education);

    printf("Name                     : %s\n",name);
    printf("Age                      : %d\n",age);
    printf("Height                   : %f\n",height);
    printf("Weight                   : %d\n",weight);
    printf("Gender                   : %c\n",gender);
    printf("Education Qualification  : %s\n",education);

    return(0);

}