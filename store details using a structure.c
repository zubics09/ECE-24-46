#include <stdio.h>

struct Student {
    char name[50];
};

int main() {
    struct Student student;

    printf("Enter the student's name: ");
    scanf("%s", student.name);

    printf("Student's name: %s\n", student.name);

    return 0;
}

