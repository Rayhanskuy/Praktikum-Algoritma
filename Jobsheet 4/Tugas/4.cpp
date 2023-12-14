/*	created by: Mahendrata Rayhan Syahputra
	NIM: 23343043 */
	
	
#include <stdio.h> 

int main(){
	
	int jam, harga, total;
	
	printf("Masukkan jumlah jam menonton = ");
	scanf("%d", &jam);
	
	if (jam <= 0){
		printf("angka tidak valid\n");
		return 0;
	}
	
	harga= 15000;
	if (jam > 1){
		harga += (jam - 1) * 7500;
	}
	
	total = harga;
	
	printf("Total harga yang harus dibayar adalah Rp.%.2d", total);
	
	return 0;
}
