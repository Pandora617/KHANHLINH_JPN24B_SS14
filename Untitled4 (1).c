#include <stdio.h>

int main() {
    char str[] = "bcdac";
    int count[256] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        count[(int)str[i]]++;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("%c: %d\n", i, count[i]);
        }
    }

    return 0;
}

