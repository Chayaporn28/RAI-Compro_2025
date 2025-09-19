#include <stdio.h>
#include <ctype.h>

int vowel(const char *str) 
{
    int count = 0;
    while(*str) {
        char chr = tolower(*str);
        if (chr =='a'||chr =='e'||chr =='i'||chr =='o'||chr =='u') {
            count++;
        }
        str++;
    }
    return count;
}

int main() 
{
    char str[100];
    printf("Input : ");
    scanf(" %[^\n]",str);
    printf("Output : Number of vowels : %d\n",vowel(str));

    return 0;
}
