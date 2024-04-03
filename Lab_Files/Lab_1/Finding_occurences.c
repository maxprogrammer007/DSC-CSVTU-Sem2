#include <stdio.h>

int main() {
    char str[] = "hello world";
    char substr[] = "world";
    int i, j, found = -1;

    // Searching for the sub-string
    for (i = 0; str[i] != '\0' && found == -1; i++) {
        for (j = 0; substr[j] != '\0'; j++) {
            if (str[i + j] != substr[j]) break;
        }
        if (substr[j] == '\0') found = i;
    }

    if (found != -1) {
        printf("Sub-string found at position: %d\n", found);
    } else {
        printf("Sub-string not found.\n");
    }

    return 0;
}

