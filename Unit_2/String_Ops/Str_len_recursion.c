#include<stdio.h>

int str_len(char *string);

int main(){
    char string1[] = "abcde";
    int string1_length = str_len(string1);
    printf("The length of the given string is %d", string1_length);
    return 0;
}

int str_len(char *string)
{
    if( * string == '\0') return 0;
    else return 1 + str_len(string + 1);
}