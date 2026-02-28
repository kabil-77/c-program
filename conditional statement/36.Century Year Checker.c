#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 100 == 0) {
        printf("It is a Century year.\n");
    } else {
        printf("It is not a Century year.\n");
    }
    return 0;
}