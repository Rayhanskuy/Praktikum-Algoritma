/*	created by: Mahendrata Rayhan Syahputra
	NIM: 23343043 */
	
	
#include <stdio.h>


int main()
{
double Belanja, Total;
		printf("|------------TOSERBA----------|\n");
	
	printf("Masukkan Total belanja anda: Rp.");
	scanf("%lf", &Belanja);
	
	if( Belanja <= 75000)
	{
		Total = Belanja - (0.05 * Belanja );
		printf("================================================\n");
		printf("Selamat anda mendapatkan diskon sebesar 5 persen\n");
		printf("Total Belanja anda adalah Rp.%.2lf ", Total);
	}
	else if (Belanja > 75000 || Belanja <= 125000)
	{
		Total = Belanja - (0.15 * Belanja);
		printf("================================================\n");
		printf("Selamat anda mendapatkan diskon sebesar 15 persen\n");
		printf("Total Belanja anda adalah Rp.%.2lf ", Total);
	}
	else if (Belanja > 125000)
	{
		Total = Belanja - (0.25 * Belanja) + 5000;
		printf("================================================\n");
		printf("Selamat anda mendapatkan diskon sebesar 25 persen\n");
		printf("Total Belanja anda adalah Rp.%.2lf ", Total);
	}
	else
	{
		printf("================================================\n");
		printf("Program error, nilai tidak valid!\n");
	}
	return 0;
}
	
	
	
	
	
