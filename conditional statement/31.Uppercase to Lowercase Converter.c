#include <stdio.h>

int main() {
    char ch;
    printf("Enter an uppercase letter: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("Lowercase: %c\n", ch + 32);
    } else {
        printf("That's not an uppercase letter!\n");
    }
    return 0;
}