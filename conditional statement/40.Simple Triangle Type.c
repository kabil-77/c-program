#include <stdio.h>

int main() {
    int s1, s2, s3;
    printf("Enter three sides: ");
    scanf("%d %d %d", &s1, &s2, &s3);

    if (s1 == s2 && s2 == s3) {
        printf("Equilateral Triangle.\n");
    } else {
        printf("Not an Equilateral Triangle.\n");
    }
    return 0;
}