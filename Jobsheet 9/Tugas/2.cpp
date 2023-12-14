#include <stdio.h>
#include <string.h>

void tampilkanTerbalik(const char *kalimat) {
    int panjang = strlen(kalimat);

    // Membuat pointer yang menunjuk ke karakter terakhir
    const char *ptr = kalimat + panjang - 1;

    // Menampilkan karakter dari belakang ke depan
    while (ptr >= kalimat) {
        printf("%c", *ptr);
        ptr--;
    }

    printf("\n");
}

int main() {
    char kalimat_masukan[100];

    // Menerima input dari pengguna
    printf("Masukkan kalimat: ");
    fgets(kalimat_masukan, sizeof(kalimat_masukan), stdin);

    // Menghapus karakter newline (\n) dari input
    kalimat_masukan[strcspn(kalimat_masukan, "\n")] = '\0';

    // Menampilkan kalimat terbalik dengan menggunakan fungsi dan pointer
    tampilkanTerbalik(kalimat_masukan);

    return 0;
}

