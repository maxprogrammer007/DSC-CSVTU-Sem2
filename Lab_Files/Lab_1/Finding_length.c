#include <stdio.h>

int main() {
    char str[] = "hello";
    int length;

    // Calculating length
    for (length = 0; str[length] != '\0'; length++);

    printf("Length of String: %d\n", length);
    return 0;
}
