#include <stdio.h>

int main() {
    int pin = 1234;
    int input;

    printf("Enter your 4-digit PIN: ");
    scanf("%d", &input);

    if (input == pin) {
        printf("Access Granted.\n");
    } else {
        printf("Access Denied.\n");
    }

    return 0;
}