#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    struct student {
        char name[20];
        int id;
        float grades[4];
        float average,top;
    } student[3];
    for(i = 0; i < 3; i++) {
        printf("Enter name, ID, and 4 grades for student %d : \n",i+1);
        scanf(" %s %d %f %f %f %f",student[i].name,&student[i].id,&student[i].grades[0],&student[i].grades[1],&student[i].grades[2],&student[i].grades[3]);
        printf("\n");
    }

    printf("Student Averages : \n");
    for(i = 0; i < 3; i++) {
        student[i].average = (student[i].grades[0] + student[i].grades[1] + student[i].grades[2] + student[i].grades[3])/4;
        printf("%s (ID : %d) : %.2f",student[i].name,student[i].id,student[i].average);
        printf("\n");
    }
    printf("\n");

    int max = 0;
    for(i = 0; i < 3; i++) {
        if(student[i].average > student[max].average)
        max = i;
    }
    printf("Top Student : %s with %.2f",student[max].name,student[max].average);
    printf("\n\n");

    float math = 0 ,eng = 0, sci = 0, his = 0;
    printf("Subject Averages : \n");
    for(i = 0; i < 3; i++) {
        math += student[i].grades[0];
        eng += student[i].grades[1];
        sci += student[i].grades[2];
        his += student[i].grades[3];
    }
    float avermath = 0, avereng = 0, aversci = 0, averhis = 0;
    avermath = math/3;
    avereng = eng/3;
    aversci = sci/3;
    averhis = his/3;
    printf("Math : %.2f\n",avermath);
    printf("English : %.2f\n",avereng);
    printf("Science : %.2f\n",aversci);
    printf("History : %.2f\n",averhis);
    printf("\n");

    float top = avermath;
    char topsub[20] = "Math";
    if(avereng > top) {
        top = avereng;
        strcpy(topsub, "English");
    }
    if(aversci > top) {
        top = aversci;
        strcpy(topsub, "Science");
    }
    if(averhis > top) {
        top = averhis;
        strcpy(topsub, "History");
    }
    printf("Top Subject : %s with average %.2f",topsub,top);
    printf("\n");

    return(0);
}