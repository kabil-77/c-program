#include <stdio.h>

int main() {
    int temp;
    printf("Enter temperature in Celsius: ");
    scanf("%d", &temp);

    if (temp > 30) {
        printf("It's hot outside, stay hydrated!\n");
    } else if (temp >= 15 && temp <= 30) {
        printf("The weather is pleasant.\n");
    } else {
        printf("It's cold, wear a jacket!\n");
    }

    return 0;
}