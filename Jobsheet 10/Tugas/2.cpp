/*	created by: Mahendrata Rayhan Syahputra
	NIM: 23343043 */
	
	
#include <stdio.h>

// Enumerasi untuk bulan
enum Bulan {
    JANUARI = 1, FEBRUARI, MARET, APRIL, MEI, JUNI,
    JULI, AGUSTUS, SEPTEMBER, OKTOBER, NOVEMBER, DESEMBER
};

// Struktur untuk menyimpan tanggal lahir
struct TanggalLahir {
    int hari;
    enum Bulan bulan;
    int tahun;
};

// Enumerasi untuk zodiak
enum Zodiak {
    CAPRICORN, AQUARIUS, PISCES, ARIES, TAURUS, GEMINI,
    CANCER, LEO, VIRGO, LIBRA, SCORPIO, SAGITTARIUS
};

// Fungsi untuk menentukan zodiak berdasarkan tanggal lahir
enum Zodiak tentukanZodiak(struct TanggalLahir tanggalLahir) {
    // Logika untuk menentukan zodiak
    // Contoh sederhana, Anda dapat menggantinya sesuai dengan aturan zodiak yang sebenarnya

    if ((tanggalLahir.bulan == MARET && tanggalLahir.hari >= 21) || (tanggalLahir.bulan == APRIL && tanggalLahir.hari <= 19)) {
        return ARIES;
    } else if ((tanggalLahir.bulan == APRIL && tanggalLahir.hari >= 20) || (tanggalLahir.bulan == MEI && tanggalLahir.hari <= 20)) {
        return TAURUS;
    } else if ((tanggalLahir.bulan == MEI && tanggalLahir.hari >= 21) || (tanggalLahir.bulan == JUNI && tanggalLahir.hari <= 20)) {
        return GEMINI;
    } else if ((tanggalLahir.bulan == JUNI && tanggalLahir.hari >= 21) || (tanggalLahir.bulan == JULI && tanggalLahir.hari <= 22)) {
        return CANCER;
    } else if ((tanggalLahir.bulan == JULI && tanggalLahir.hari >= 23) || (tanggalLahir.bulan == AGUSTUS && tanggalLahir.hari <= 22)) {
        return LEO;
    } else if ((tanggalLahir.bulan == AGUSTUS && tanggalLahir.hari >= 23) || (tanggalLahir.bulan == SEPTEMBER && tanggalLahir.hari <= 22)) {
        return VIRGO;
    } else if ((tanggalLahir.bulan == SEPTEMBER && tanggalLahir.hari >= 23) || (tanggalLahir.bulan == OKTOBER && tanggalLahir.hari <= 22)) {
        return LIBRA;
    } else if ((tanggalLahir.bulan == OKTOBER && tanggalLahir.hari >= 23) || (tanggalLahir.bulan == NOVEMBER && tanggalLahir.hari <= 21)) {
        return SCORPIO;
    } else if ((tanggalLahir.bulan == NOVEMBER && tanggalLahir.hari >= 22) || (tanggalLahir.bulan == DESEMBER && tanggalLahir.hari <= 21)) {
        return SAGITTARIUS;
    } else if ((tanggalLahir.bulan == DESEMBER && tanggalLahir.hari >= 22) || (tanggalLahir.bulan == JANUARI && tanggalLahir.hari <= 19)) {
        return CAPRICORN;
    } else if ((tanggalLahir.bulan == JANUARI && tanggalLahir.hari >= 20) || (tanggalLahir.bulan == FEBRUARI && tanggalLahir.hari <= 18)) {
        return AQUARIUS;
    } else if ((tanggalLahir.bulan == FEBRUARI && tanggalLahir.hari >= 19) || (tanggalLahir.bulan == MARET && tanggalLahir.hari <= 20)) {
        return PISCES;
    } 
}

int main() {
    // Input tanggal lahir dari pengguna
    struct TanggalLahir tanggalLahir;
    printf("Masukkan tanggal lahir Anda [dd-mm-tahun] : ");
    scanf("%d-%d-%d", &tanggalLahir.hari, (int*)&tanggalLahir.bulan, &tanggalLahir.tahun);

    // Tentukan zodiak
    enum Zodiak zodiak = tentukanZodiak(tanggalLahir);

    // Tampilkan hasil
    printf("Zodiak Anda adalah: ");
    switch (zodiak) {
        case ARIES:
            printf("ARIES\n");
            break;
        case TAURUS:
            printf("TAURUS\n");
            break;
        case GEMINI:
            printf("GEMINI\n");
            break;
        case CANCER:
            printf("CANCER\n");
            break;
        case LEO:
            printf("LEO\n");
            break;
        case VIRGO:
            printf("VIRGO\n");
            break;
        case LIBRA:
            printf("LIBRA\n");
            break;
        case SCORPIO:
            printf("SCORPIO\n");
            break;
        case SAGITTARIUS:
            printf("SAGITTARIUS\n");
            break;
        case CAPRICORN:
            printf("CAPRICORN\n");
            break;
        case AQUARIUS:
            printf("AQUARIUS\n");
            break;
        case PISCES:
            printf("PISCES\n");
            break;
        default:
            printf("Zodiak tidak dikenal\n");
    }

    return 0;
}

