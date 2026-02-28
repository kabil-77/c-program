#include <stdio.h>

int main() {
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    if (x == y && y == z) {
        printf("All numbers are equal.\n");
    } else {
        printf("Numbers are not equal.\n");
    }
    return 0;
}