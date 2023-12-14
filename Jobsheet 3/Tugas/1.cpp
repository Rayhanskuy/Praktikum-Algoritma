/*	created by: Mahendrata Rayhan Syahputra
	NIM: 23343043 */
	
	
#include <stdio.h> 
int main()
{
	printf("\n Mengkonversi nilai mata uang rupiah ke dollar\n");
	printf("\n----------------------------------------------\n");
	
	double rupiah, dollar;
	double kurs= 14250;
	
	printf("Masukkan jumlah rupiah: ");
	scanf ("%lf", &rupiah);
	
	dollar= rupiah / kurs;
	
	printf("Rp.%.2f = $.%.2f\n", rupiah, dollar);

	return 0;
	
}
