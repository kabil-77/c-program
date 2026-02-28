#include <stdio.h>

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    if (x < y) {
        printf("%d is smaller than %d\n", x, y);
    } else if (y < x) {
        printf("%d is smaller than %d\n", y, x);
    } else {
        printf("Both numbers are equal.\n");
 }
}