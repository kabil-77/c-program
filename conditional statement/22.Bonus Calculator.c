#include <stdio.h>

int main() {
    int years;
    printf("Enter years of service: ");
    scanf("%d", &years);

    if (years > 5) {
        printf("Congratulations! You get a 10%% bonus.\n");
    } else {
        printf("No bonus this year.\n");
    }

    return 0;
}