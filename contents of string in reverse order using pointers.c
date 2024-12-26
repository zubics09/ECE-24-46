#include <stdio.h>

int main() {
    char str[] = "Hello";
    char *ptr = str;

    while (*ptr != '\0') {
        ptr++;
    }

    while (ptr != str) {
        ptr--;
        printf("%c", *ptr);
    }

    return 0;
}

