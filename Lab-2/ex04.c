#include<stdio.h>
int main()
{
    char name[10];
    int student;
    float programming;
    float physics;
    float calculus;

    printf("Enter your name : ");
    scanf(" %[^\n]",name);
    printf("Enter your student ID : ");
    scanf("%d",&student);
    printf("Enter your programming score : ");
    scanf("%f",&programming);
    printf("Enter your physics score : ");
    scanf("%f",&physics);
    printf("Enter your calculus : ");
    scanf(" %f",&calculus);

    printf("Hi %s(%d)! Your GPA is %.2f\n",name,student,(programming+physics+calculus)/3);

    return (0);

}