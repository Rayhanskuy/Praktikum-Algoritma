/*	created by: Mahendrata Rayhan Syahputra
	NIM: 23343043 */
	
	
#include <stdio.h>

#include <stdlib.h>

// Deklarasi variabel global
int no_rek = 0123; // Nomor rekening
char nama[10] = "Hattori"; // Nama akun
int saldo = 175000; // Saldo ATM
int pilihan; // Pilihan menu
int jumlah; // Jumlah setoran atau penarikan

// Fungsi untuk menampilkan menu ATM
void menu() {
    printf("ATM\n");
    printf("1) Cek Saldo\n");
    printf("2) Setoran\n");
    printf("3) Penarikan Tunai\n");
    printf("4) Exit\n");
    printf("Masukkan pilihan Anda: ");
    scanf("%d", &pilihan);
}

// Fungsi untuk menampilkan saldo
void cek_saldo() {
    printf("No Rek : %d\n", no_rek);
    printf("Nama Akun : %s\n", nama);
    printf("Saldo ATM : Rp. %d\n", saldo);
}

// Fungsi untuk melakukan setoran
void setoran() {
    printf("Masukkan jumlah setoran: ");
    scanf("%d", &jumlah);
    if (jumlah > 0) {
        saldo = saldo + jumlah; // Menambahkan jumlah setoran ke saldo
        printf("Setoran berhasil. Saldo Anda sekarang adalah Rp. %d\n", saldo);
    } else {
        printf("Jumlah setoran tidak valid.\n");
    }
}

// Fungsi untuk melakukan penarikan tunai
void penarikan() {
    printf("Masukkan jumlah penarikan: ");
    scanf("%d", &jumlah);
    if (jumlah > 0) {
        if (saldo - jumlah >= 50000) { // Memeriksa apakah saldo cukup untuk penarikan
            saldo = saldo - jumlah; // Mengurangi jumlah penarikan dari saldo
            printf("Penarikan berhasil. Saldo Anda sekarang adalah Rp. %d\n", saldo);
        } else {
            printf("Saldo Anda tidak cukup untuk penarikan.\n");
        }
    } else {
        printf("Jumlah penarikan tidak valid.\n");
    }
}

// Fungsi utama
int main() {
    do {
        menu(); // Memanggil fungsi menu
        switch (pilihan) { // Menjalankan fungsi sesuai dengan pilihan
            case 1:
                cek_saldo();
                break;
            case 2:
                setoran();
                break;
            case 3:
                penarikan();
                break;
            case 4:
                printf("Terima kasih telah menggunakan layanan kami.\n");
                exit(0); // Keluar dari program
            default:
                printf("Pilihan tidak valid.\n");
        }
        system("pause"); // Menahan layar agar tidak langsung berpindah
        system("cls"); // Membersihkan layar
    } while (1); // Mengulangi program sampai pilihan 4 dipilih
}


