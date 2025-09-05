#include<stdio.h>
int main()
{
    int i;
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
        printf("student %d name is %s, age %d. score %.1f\n",i+1,student[i].name,student[i].age,student[i].score);
    }

    return(0);
}