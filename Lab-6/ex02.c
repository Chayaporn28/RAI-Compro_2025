#include<stdio.h>
int main()
{
    int i;
    int max=0;
    struct student {
      char name[100];
      int age;
      float score;  
    } student[3];
    for(i = 0; i < 3; i++) {
        printf("Student %d's name : ",i+1);
        scanf(" %[^\n]*c",student[i].name);
        printf("Student %d's age : ",i+1);
        scanf("%d",&student[i].age);
        printf("Student %d's score : ",i+1);
        scanf("%f",&student[i].score);
    }
    printf("\n");

    for(i = 0; i < 3; i++) {
        if(student[i].score > student[max].score)
        max = i;
    }
    printf("The highest scores belongs to %s at %.1f scores!",student[max].name,student[max].score);
    printf("\n");

    return(0);
}