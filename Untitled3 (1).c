#include <stdio.h>

int main() {
    char str[] = "hello world";
    char ch;
    int i, j = 0;

    printf("Nhap vao 1 ky tu de xoa: ");
    scanf("%c", &ch);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ch) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';  

    printf("Chuoi sau khi xoa ky tu '%c': %s\n", ch, str);
    return 0;
}

