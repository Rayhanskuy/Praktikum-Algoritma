/*	created by: Mahendrata Rayhan Syahputra
	NIM: 23343043 */
	
	
#include <stdio.h> 

int main()
{
	int jj, mm, dd;
	float detik;
	
	printf("Program mengkonversi total detik ke jam, menit dan detik\n");
	printf("========================================================\n");
	
	printf("Masukkan jumlah waktu dalam detik: ");
	scanf ("%f", &detik);
	
	if(detik <= 0){
		printf("angka tidak valid\n");
		return 0;
	}
	
	jj= detik / 3600;
	mm= (detik / 60) - (jj*60);
	dd= detik - (jj * 3600)-(mm * 60);
	
	printf("%d Jam, %d Menit, %d Detik", jj, mm, dd);
	
	return 0;
	
}
