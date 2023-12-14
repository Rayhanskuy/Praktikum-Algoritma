/*	created by: Mahendrata Rayhan Syahputra
	NIM: 23343043 */
	
	
#include <stdio.h>

int main() {
    // Deklarasi variabel
    int jumlahMahasiswa = 20;
    int nilaiMahasiswa[jumlahMahasiswa];
    int i;
    float totalNilai = 0, rataRata;

    // Input nilai dari pengguna
    printf("Masukkan nilai dari %d mahasiswa:\n", jumlahMahasiswa);
    for (i = 0; i < jumlahMahasiswa; i++) {
        printf("Nilai mahasiswa %d: ", i + 1);
        scanf("%d", &nilaiMahasiswa[i]);

        // Menambahkan nilai ke total
        totalNilai += nilaiMahasiswa[i];
    }

    // Menghitung rata-rata
    rataRata = totalNilai / jumlahMahasiswa;

    // Menampilkan hasil
    printf("\nRata-rata nilai dari %d mahasiswa adalah: %.2f\n", jumlahMahasiswa, rataRata);

    return 0;
}

