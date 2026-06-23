#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[256] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (count[(unsigned char)str[i]] == 1) {
            printf("First repeating character: %c\n", str[i]);
            return 0;
        }
        count[(unsigned char)str[i]]++;
    }

    printf("No repeating character found.\n");

    return 0;
}