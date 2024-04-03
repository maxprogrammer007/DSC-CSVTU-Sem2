#include <stdio.h>
void reverse(char *string)
{
    if(string == NULL) return ;
    char *end = string;

    if(*end == '\0') return ;

    while(*end != '\0'){
        end++;
    }
    end--;


    char *start = string;
    char temp ;
    while(start < end){
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}
int main()
{
    char string[] = "abcde";
    reverse(string);
    printf("%s",string);

    return 0;
}