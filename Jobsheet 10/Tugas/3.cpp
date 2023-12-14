/*	created by: Mahendrata Rayhan Syahputra
	NIM: 23343043 */
	

#include <stdio.h>


// Enumerasi untuk program studi
enum ProgramStudi {
    TI,
    SI,
    MI
};

// Struktur untuk menyimpan data mahasiswa
struct Mahasiswa {
    int npm;
    char nama[50];
    char tanggalLahir[11];
    char alamat[100];
    long long hp;
    enum ProgramStudi prodi;
};

int main() {
    // Inisialisasi array untuk menyimpan data mahasiswa
    struct Mahasiswa mahasiswas[100];
    int jumlahMahasiswa = 0;
    char pilihan;

    do {
        // Input data mahasiswa
        printf("NPM: ");
        scanf("%d", &mahasiswas[jumlahMahasiswa].npm);

        printf("NAMA: ");
        scanf(" %[^\n]", mahasiswas[jumlahMahasiswa].nama);

        printf("TGL LAHIR (mm-dd-yyyy): ");
        scanf("%s", mahasiswas[jumlahMahasiswa].tanggalLahir);

        printf("ALAMAT: ");
        scanf(" %[^\n]", mahasiswas[jumlahMahasiswa].alamat);

        printf("HP: ");
        scanf("%lld", &mahasiswas[jumlahMahasiswa].hp);

        printf("Program Studi (0:TI, 1:SI, 2:MI): ");
        scanf("%d", (int*)&mahasiswas[jumlahMahasiswa].prodi);

        // Tampilkan data mahasiswa
        printf("%d %s %s %s %lld\n",
               mahasiswas[jumlahMahasiswa].npm,
               mahasiswas[jumlahMahasiswa].nama,
               mahasiswas[jumlahMahasiswa].tanggalLahir,
               mahasiswas[jumlahMahasiswa].alamat,
               mahasiswas[jumlahMahasiswa].hp);

        // Tambahkan data mahasiswa ke array
        jumlahMahasiswa++;

        // Meminta user untuk memasukkan data lagi
        printf("Mau memasukkan data lagi [y/t]? ");
        scanf(" %c", &pilihan);

    } while (pilihan == 'y' || pilihan == 'Y');

    return 0;
}

