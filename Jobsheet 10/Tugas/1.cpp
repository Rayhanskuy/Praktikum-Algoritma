/*	created by: Mahendrata Rayhan Syahputra
	NIM: 23343043 */
	
	
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Struct untuk menyimpan informasi permainan
struct Game {
    int nomorKomputer;
    int jumlahTebakan;
};

// Fungsi untuk memulai permainan
struct Game mulaiPermainan() {
    struct Game permainan;
    permainan.nomorKomputer = rand() % 20 + 1; // Memilih nomor acak antara 1 dan 20
    permainan.jumlahTebakan = 0;
    return permainan;
}

// Fungsi untuk menebak nomor
void tebakNomor(struct Game *permainan, int tebakan) {
    permainan->jumlahTebakan++;

    if (tebakan < permainan->nomorKomputer) {
        printf("Nomor saya lebih besar!\n");
    } else if (tebakan > permainan->nomorKomputer) {
        printf("Nomor saya lebih kecil!\n");
    } else {
        printf("Selamat, Anda benar!\n");
        printf("Jumlah tebakan: %d\n", permainan->jumlahTebakan);
    }
}

int main() {
    // Inisialisasi random seed
    srand(time(NULL));

    char pilihan;
    do {
        // Memulai permainan baru
        struct Game permainan = mulaiPermainan();

        int tebakan;
        printf("Tebak nomor antara 1 dan 20: ");

        while (1) {
            scanf("%d", &tebakan);

            // Menebak nomor
            tebakNomor(&permainan, tebakan);

            // Keluar dari loop jika tebakan benar
            if (tebakan == permainan.nomorKomputer) {
                break;
            }
        }

        // Meminta user untuk bermain lagi
        printf("Ingin bermain lagi? (y/n): ");
        scanf(" %c", &pilihan);

    } while (pilihan == 'y' || pilihan == 'Y');

    return 0;
}

