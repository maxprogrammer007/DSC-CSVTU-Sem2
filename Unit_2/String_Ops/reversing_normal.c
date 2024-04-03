#include<stdio.h>
void reverse(char *string){
    int length = strlen(string);
    int middle = length/2;

    char temp;
    for(int i = 0; i < middle; i++){
        temp = string[i];
        string[i] = string[length -i-1];
        string[length - i - 1] = temp;
    }
}
int main() {

    char test[] = "Hello_This_is_string";

    reverse(test);

    printf("%s",test);

    return 0;

}