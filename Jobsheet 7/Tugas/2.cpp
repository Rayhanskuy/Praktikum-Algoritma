/*	created by: Mahendrata Rayhan Syahputra
	NIM: 23343043 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int jumlahMahasiswa;

    // Meminta input banyaknya mahasiswa
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlahMahasiswa);

    // Membuat array untuk menyimpan nama mahasiswa
    char namaMahasiswa[jumlahMahasiswa][50]; // Maksimal panjang nama 50 karakter

    // Meminta input nama mahasiswa
    for (int i = 0; i < jumlahMahasiswa; i++) {
        printf("Masukkan nama mahasiswa ke-%d: ", i + 1);
        scanf("%s", namaMahasiswa[i]);
    }

    // Menampilkan nama-nama mahasiswa
    printf("\nNama-nama mahasiswa:\n");
    for (int i = 0; i < jumlahMahasiswa; i++) {
        printf("Mahasiswa ke-%d: %s\n", i + 1, namaMahasiswa[i]);
    }

    return 0;
}

