
#include <stdio.h>

int main() {
    char str[] = "radar";
    int length, i, isPalindrome = 1;

    // Finding the length of the string
    for (length = 0; str[length] != '\0'; length++);

    // Checking for palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
