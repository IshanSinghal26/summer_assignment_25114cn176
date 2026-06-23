#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[256] = {0};
    char maxChar;
    int maxCount = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (count[(unsigned char)str[i]] > maxCount) {
            maxCount = count[(unsigned char)str[i]];
            maxChar = str[i];
        }
    }

    printf("Maximum occurring character: %c\n", maxChar);
    printf("Frequency: %d\n", maxCount);

    return 0;
}