#include <stdio.h>

int main() {
    int speed;
    printf("Enter your speed (km/h): ");
    scanf("%d", &speed);

    if (speed > 80) {
        printf("WARNING: Over-speeding!\n");
    } else {
        printf("Safe speed.\n");
    }
    return 0;
}