#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "Hello my gmail is test123@gmail.com";
    int letterCount = 0, digitCount = 0, specialCount = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            letterCount++;
        } else if (isdigit(str[i])) {
            digitCount++;
        } else {
            specialCount++;
        }
    }

    printf("So ky tu la chu cai: %d\n", letterCount);
    printf("So ly tu la chu so: %d\n", digitCount);
    printf("So ky tu dac biet: %d\n", specialCount);

    return 0;
}

