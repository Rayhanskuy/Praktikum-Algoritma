/*	created by: Mahendrata Rayhan Syahputra
	NIM: 23343043 */
	
	
#include <stdio.h> 

int main()
{
float panjang, lebar, luas;

printf("masukkan nilai panjang(cm): ");
scanf("%f", &panjang);

printf("masukkan nilai lebar (cm): ");
scanf("%f", &lebar);

luas= panjang*lebar;

printf("luas persegi panjang adalah %.2f cm^2\n ", luas);

return 0;
	
	
}
