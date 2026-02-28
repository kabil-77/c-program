#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 16) {
        printf("You are eligible for a learner's permit.\n");
    } else {
        printf("You must be at least 16.\n");
    }
    return 0;
}