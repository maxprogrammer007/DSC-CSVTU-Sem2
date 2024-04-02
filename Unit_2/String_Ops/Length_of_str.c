#include<stdio.h>

int str_len(char *string);

int main() {
    char *s1 ="This is the string";
    int our_length = str_len(s1);

    printf("Our Length : %d \n",our_length);

    return 0;
}

int str_len(char *string){
    int length  = 0;
    while(string[length] != '\0')
    {
        length++;
    }
    return length;
}