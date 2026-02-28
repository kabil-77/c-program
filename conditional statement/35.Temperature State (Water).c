#include <stdio.h>

int main() {
    int temp;
    printf("Enter water temperature: ");
    scanf("%d", &temp);

    if (temp <= 0) {
        printf("The water is Solid (Ice).\n");
    } else if (temp >= 100) {
        printf("The water is Gaseous (Steam).\n");
    } else {
        printf("The water is Liquid.\n");
    }
    return 0;
}