#include <stdio.h>

#define PI 3.14
#define SQUARE(x) ((x) * (x))

int main() {
    printf("Value of PI: %.2f\n", PI);

    int num = 4;
    printf("Square of %d: %d\n", num, SQUARE(num));

    return 0;
}

