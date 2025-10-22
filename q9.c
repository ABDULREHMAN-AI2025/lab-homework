#include <stdio.h>

int main() {
    char str[] = "my name is Abdul";
    int maxLength = 0;
    int currentLength = 0;
    int maxStart = 0;
    int startIndex = 0;

    for (int i = 0; ; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            currentLength++;
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                maxStart = startIndex;
            }
            currentLength = 0;
            startIndex = i + 1;
        }
        if (str[i] == '\0') break;
    }

    printf("Longest word: ");
    for (int i = maxStart; i < maxStart + maxLength; i++) {
        printf("%c", str[i]);
    }
    printf("\nLength: %d\n", maxLength);

    return 0;
}
