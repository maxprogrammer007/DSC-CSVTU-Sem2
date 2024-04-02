#include<string.h>
#include<stdio.h>
#include<stdlib.h>
char *str_cat(char *s1 , char *s2);

int main() {
    char s1[] = "abc";
    char s2[] = "wxcv";
    printf("%s",str_cat(s1 , s2));

    return 0;
}

char *str_cat(char *s1 , char *s2){
    int s1_length = strlen(s1);
    int s2_length = strlen(s2);
    int size = s1_length + s2_length + 1;

    char *s = calloc(size, sizeof(char));

    for(int i = 0 ; i < s1_length ; i++){
        s[i] = s1[i];
    }

    for(int i = 0 ; i < s2_length ;i++){
        s[s1_length + i] = s2[i];
    }
    s[size - 1] = '\0';

    return s;
}