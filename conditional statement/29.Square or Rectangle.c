#include <stdio.h>

int main() {
    int l, b;
    printf("Enter length and breadth: ");
    scanf("%d %d", &l, &b);

    if (l == b) {
        printf("It is a Square.\n");
    } else {
        printf("It is a Rectangle.\n");
    }
    return 0;
}