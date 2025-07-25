#include<stdio.h>
int main()
{
    int integer;
    float value;
    char character;

    printf("Please enter an integer value : ");
    scanf("%d", &integer);
    printf("Your entered:%d\n" ,integer);
    printf("Please enter a float value : ");
    scanf("%f", &value);
    printf("Your entered:%.1f\n", value);
    printf("Please enter a character : ");
    scanf("%s", &character);
    printf("Your enetered:%c\n", character);

    return(0);

}