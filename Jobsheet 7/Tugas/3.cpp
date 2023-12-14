/*	created by: Mahendrata Rayhan Syahputra
	NIM: 23343043 */
	
	
#include <stdio.h>
#include <string.h>

int main() {
    // Menentukan username dan password yang benar
    char username[20] = "algoritma";
    char password[20] = "mudah";

    // Variabel untuk menyimpan input pengguna
    char inputUsername[20];
    char inputPassword[20];

    // Meminta input username
    printf("Masukkan username: ");
    scanf("%s", inputUsername);

    // Meminta input password
    printf("Masukkan password: ");
    scanf("%s", inputPassword);

    // Memeriksa apakah username dan password sesuai
    if (strcmp(username, inputUsername) == 0 && strcmp(password, inputPassword) == 0) {
        printf("Berhasil login\n");
    } else {
        printf("Password salah\n");
    }

    return 0;
}

