#include <stdio.h>

int main() {
    char first[] = "hello";
    char second[] = " world";
    char concatenated[200];
    int i, j;

    // Copying the first string
    for (i = 0; first[i] != '\0'; i++) {
        concatenated[i] = first[i];
    }

    // Concatenating the second string
    for (j = 0; second[j] != '\0'; j++, i++) {
        concatenated[i] = second[j];
    }
    concatenated[i] = '\0';

    printf("Concatenated String: %s\n", concatenated);
    return 0;
}


