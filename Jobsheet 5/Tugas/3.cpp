/*	created by: Mahendrata Rayhan Syahputra
	NIM: 23343043 */
	
	
#include <stdio.h>

#include <math.h>

int main()
{
	float phi = 3.14;
	double hasil, r, sisi, pb, lb, tb, tt;
	char pilihan;
	
	
	printf("|------------------------------------|\n");
	printf("|    Program Kalkulator Sederhana    |\n");
	printf("|------------------------------------|\n");
    printf("Pilih operasi yang ingin dilakukan:\n");
    printf("a) Menghitung Luas Permukaan Bola\n");
    printf("b) Menghitung Luas Permukaan Kubus\n");
    printf("c) Menghitung Luas Permukaan Balok\n");
    printf("d) Menghitung Luas Permukaan Tabung\n");
    printf("Masukkan pilihan Anda: ");
    scanf(" %c", &pilihan);
    
    switch(pilihan)
    {
    	case 'a':
    	printf("Masukkan jari-jari bola: ");
    	scanf("%lf", &r);
    	
    	hasil = 4 * phi * r * r;
    	
    	printf("Luas permukaan Bola tersebut adalah %.2lf", hasil);
    	break;
    	
    	case 'b':
    	printf("Masukkan nilai sisi kubus: ");
    	scanf("%lf", &sisi);
    	
    	hasil = 6 * sisi * sisi;
    	
    	printf("Luas permukaan Kubus tersebut adalah %.2lf", hasil);
    	break;
    	
		case 'c':
		printf("Masukkan nilai panjang balok: ");
		scanf("%lf", &pb);
		printf("Masukkan nilai lebar balok: ");
		scanf("%lf", &lb);
		printf("Masukkan nilai tinggi balok: ");
		scanf("%lf", &tb);
		
		hasil = 2 * (pb*lb + pb*tb + lb*tb);
		
		printf("Luas permukaan Balok tersebut adalah %.2lf", hasil);
    	break;
		
		case 'd':
		printf("Masukkan nilai jari-jari tabung: ");
		scanf("%lf", &r);	
    	printf("Masukkan nilai tinggi tabung: ");
		scanf("%lf", &tt);
		
		hasil = (2*phi*r*r)+(2*phi*r*tt);
		printf("Luas permukaan Tabung tersebut adalah %.2lf", hasil);
    	break;
    	
    	default:
    		printf("Hasil tidak valid\n");
	}
	
	return 0;
}
