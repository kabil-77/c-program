#include <stdio.h>

int main() {
    int amount;
    printf("Enter bill amount: ");
    scanf("%d", &amount);

    if (amount > 1000) {
        printf("You get a 10%% discount!\n");
    } else {
        printf("Spend more than 1000 to get a discount.\n");
    }
    return 0;
}