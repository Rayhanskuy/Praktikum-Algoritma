/*	created by: Mahendrata Rayhan Syahputra
	NIM: 23343043 */
	
	
#include <stdio.h>

void kali_dua(int *num){
	*num = *num * 2;
}

int main(){
	int angka = 9;
	
	kali_dua(&angka);
	
	printf("isi variabel angka = %d\n", angka);
}
