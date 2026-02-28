#include <stdio.h>

int main() {
    int height;
    printf("Enter height (cm): ");
    scanf("%d", &height);

    if (height < 150) {
        printf("Category: Short\n");
    } else if (height >= 150 && height < 180) {
        printf("Category: Average\n");
    } else {
        printf("Category: Tall\n");
    }
    return 0;
}