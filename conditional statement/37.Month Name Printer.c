#include <stdio.h>

int main() {
    int m;
    printf("Enter month number (1-4): ");
    scanf("%d", &m);

    switch(m) {
        case 1: printf("January\n"); break;
        case 2: printf("February\n"); break;
        case 3: printf("March\n"); break;
        case 4: printf("April\n"); break;
        default: printf("Please enter a number between 1 and 4.\n");
    }
    return 0;
}