/*	created by: Mahendrata Rayhan Syahputra
	NIM: 23343043 */
	
	
#include <stdio.h>


float potong(float total){
	float diskon;
	
	if (total < 1000000)
	{
		diskon = 0;
	}
	else if (total >= 1000000 && total < 3000000)
	{
		diskon = 0.2 * total;
	}
	else
	{
		diskon = 0.35 * total;
	}
	return diskon; 
}

int main() {
	float total, bayar, diskon;
	
	printf("Total Pembelian : Rp. ");
	scanf("%f", &total);
	
	diskon = potong(total); 
	bayar = total - diskon;
	
	printf("Besar Diskon			: %.2f \n", diskon);
	printf("Besar yang harus dibayar	: %.2f \n", bayar);
	
	return 0;
}
