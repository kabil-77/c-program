#include <stdio.h>

int main() {
    int marks, age;
    printf("Enter marks and age: ");
    scanf("%d %d", &marks, &age);

    if (marks >= 50) {
        if (age >= 18) {
            printf("Admission Successful.\n");
        } else {
            printf("Rejected: Must be 18+.\n");
        }
    } else {
        printf("Rejected: Insufficient marks.\n");
    }
    return 0;
}