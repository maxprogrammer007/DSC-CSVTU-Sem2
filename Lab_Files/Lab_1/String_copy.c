#include <stdio.h>

int main() {
    char src[] = "hello";
    char dest[100];
    int i;

    // Copying the string
    for (i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';

    printf("Copied String: %s\n", dest);
    return 0;
}
