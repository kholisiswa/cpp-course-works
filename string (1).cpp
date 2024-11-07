#include <stdio.h>

int main() {
    char string[100];

    // Menggunakan scanf() untuk membaca input
    printf("Masukkan string (menggunakan scanf): ");
    scanf(" %99[^\n]", string);
    printf(" %s\n", string);

    // Menggunakan getchar() untuk membaca input
    printf("Masukkan string (menggunakan getchar): ");
    string[1] = getchar();
    printf(" %s\n", string);

    // Menggunakan fgets() untuk membaca input
    printf("Masukkan string (menggunakan fgets): ");
    fgets(string, sizeof(string), stdin);
    printf(" %s\n", string);

    return 0;
}
